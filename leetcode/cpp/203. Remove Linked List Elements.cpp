/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        ListNode* now = head;
        for(;now->next ;){
            if(now->next->val == val){
                ListNode* next = now->next;
                now->next = next->next;
                delete next;
            }
            else  now = now->next;
        }
        if(head->val == val) {
            ListNode* t = head;
            head = head->next;
            delete t;
        }
        return head;
    }
};
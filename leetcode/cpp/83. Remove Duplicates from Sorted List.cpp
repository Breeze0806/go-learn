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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* now = head;
        while(now && now->next){
            ListNode* next = now->next;
            if(now->val == next->val){
                now->next = next->next;
                delete next;
            }
            else{
                now = now->next;
            }
        }
        return head;
    }
};
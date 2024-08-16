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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* now = head->next->next;
        ListNode* t = head->next;
        ListNode* ans = t;
        t->next = head;
        head->next = now;
        t = head;
        while(now && now->next){
            head = now;
            now = now->next->next;
            t->next = head->next;
            head->next->next = head;
            head->next = now;
            t = head;
        }
        return ans;
    }
};
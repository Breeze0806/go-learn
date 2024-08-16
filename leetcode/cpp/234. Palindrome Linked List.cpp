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
    bool isPalindrome(ListNode* head) {
        int ln = 0, i = 0;
        ListNode* rhead = NULL;
        ListNode* now, *rnow;
        for(now = head; now; now = now->next, ++ln);
        for(now = head; i < ln / 2; ++i){
            ListNode* tnow = now;
            now = now->next;
            tnow->next = rhead;
            rhead = tnow;
        }
        if(ln % 2 == 1){
            now = now->next;
        }
        for(rnow = rhead; now && rnow; rnow = rnow->next, now = now->next){
            if(rnow->val != now->val) return false;
        }
        return true;
    }
};
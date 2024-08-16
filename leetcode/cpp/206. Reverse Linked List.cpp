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
    ListNode* reverseList(ListNode* head) {
        ListNode* now = head;
        head = NULL;
        while(now){
            ListNode* tnow= now;
            now = now->next;
            tnow->next = head;
            head = tnow;
        }
        return head;
    }
};
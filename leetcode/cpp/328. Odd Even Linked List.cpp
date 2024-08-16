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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode* last = head;
		int cnt = 1;
        for(; last->next; last = last->next, ++cnt);
		if(cnt < 3) return head;
        ListNode* now = head;
        ListNode* end = last;

        for(int i = 0; i< cnt/2; now = now->next, ++i){

            ListNode* next = now->next;
            now->next = next->next;

            end->next = next;
            next->next = NULL;

            end = next;

        }
        return head;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;

        ListNode* first = head;
        for(int i = 0 ; i < n - 1; first = first->next, ++i);

        if(!first->next){
            first = head;
            head = head->next;
            delete first;
            return head;
        }

        ListNode* second= head;
        for(;first->next->next; first = first->next, second = second->next);

        ListNode* next = second->next;
        second->next = next->next;
        delete next;

        return head;
    }
};
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 && !l2) return l1;
        if(l2 && !l1) return l2;
        if( !l2 && !l1) return NULL;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* t = NULL;
        if(t1->val < t2->val){
            t = t1;
            t1 = t1->next;
        }
        else{
            t = t2;
            t2 = t2->next;
        }
        for(;t1&&t2; t = t->next){
            if(t1->val < t2->val){
                t->next = t1;
                t1 = t1->next;
            }
            else{
                t->next = t2;
                t2 = t2->next;
            }
        }
        if(t1){
            t->next = t1;
        }
        if(t2){
            t->next = t2;
        }
        if(l1->val < l2->val) return l1;
        else return l2;
    }
};
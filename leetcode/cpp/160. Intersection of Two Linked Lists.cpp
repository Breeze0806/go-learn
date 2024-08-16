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
    int list_len(ListNode* head){
        int cnt = 0;
        for(ListNode* now = head; now; now = now->next){
            ++cnt;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int al = list_len(headA);
        int bl = list_len(headB);
        ListNode* minh = headA;
        ListNode* maxh = headB;
        int cnt = bl - al;
        if(al > bl) {
            maxh = headA;
            minh = headB;
            cnt = -cnt;
        }
        while(cnt--){
            maxh = maxh->next;
        }
        for( ;maxh && minh ; maxh = maxh->next, minh = minh->next){
            if(maxh == minh) return maxh;
        }
        return NULL;
    }
};
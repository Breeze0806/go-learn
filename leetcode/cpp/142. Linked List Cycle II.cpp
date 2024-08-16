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
    ListNode *detectCycle(ListNode *head) {
        if(!head)  return NULL;
        ListNode* one = head;
		ListNode* two = head;
		while(true){
			one = one->next;
			if(!one) return NULL;
			two = two->next;
			if(!two) return NULL;
			two = two->next;
			if(!two) return NULL;

			if (one == two) break;
		}
		//std::cout << one << std::endl;
		ListNode* now = head;
		int cnt1 = 0, cnt2 = 0;

		for(;now != one;now = now->next, cnt1++);

		for(now = one->next;now != one;now = now->next,cnt2++);

		int cnt = cnt1 - cnt2;
		ListNode* now1 = head;
		ListNode* now2 = one->next;
		if (cnt > 0){
			for(;cnt--;now1 = now1->next);
		}
		else{
			cnt = -cnt;
		    for(;cnt--;now2 = now2->next);
		}
		while(now1 !=now2 ){
			now1 = now1->next;
			now2 = now2->next;
		}
		return now1;
    }
};
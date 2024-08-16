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
		bool hasCycle(ListNode *head) {
			if (!head) return false; //特别判断链表是否为空

			ListNode* one_ = head;
			ListNode* two_ = head;

			while (1){
                /*对于链表每次都得做是否为空的检查*/
				one_ = one_->next;
				if (!one_) return false;
				two_ = two_->next;
				if (!two_) return false;
				two_ = two_->next;
				if (!two_) return false;

				if (one_ == two_)return true;
			}

		}
};
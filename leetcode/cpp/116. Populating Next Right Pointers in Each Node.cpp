/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root || !root->right||!root->left) return;
		root->left->next = root->right;
		TreeLinkNode* start = root->left;
		while(start){
			if (!start->left) return;
			TreeLinkNode*now=NULL;
			for (now = start; now->next; now = now->next){
				now->left->next = now->right;
				now->right->next = now->next->left;
			}
			now->left->next = now->right;
			start = start->left;
		}
    }
};
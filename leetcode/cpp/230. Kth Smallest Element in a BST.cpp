/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int getSize(TreeNode* root){
        if(!root) return 0;
        else return getSize(root->right) + getSize(root->left) + 1;
    }
    int kthSmallest(TreeNode* root, int k) {
        if(!root || k <= 0 || k > getSize(root)) return 0;
        int s = getSize(root->left);
        if(k == s + 1) return root->val;
        else if(k <= s) return kthSmallest(root->left, k);
        else return kthSmallest(root->right, k - s - 1);
     }
};
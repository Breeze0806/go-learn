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
    void swapLR(TreeNode* root){
        if(!root) return;
        else{
            TreeNode *t = root->left;
            root->left = root->right;
            root->right = t;
            swapLR(root->left);
            swapLR(root->right);
        }

    }
    TreeNode* invertTree(TreeNode* root) {
        swapLR(root);
        return root;
    }
};
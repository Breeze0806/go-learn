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

    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSameTree(root->left, root->right);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) {
            return true;
        }
        else if(!p||!q){
            return false;
        }
        else{
            if(p->val != q->val ) return false;
            else return isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
        }
    }
};
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
    vector<TreeNode*> vTN;
public:
    void flatten(TreeNode* root) {
        vTN.clear();
        Preorder_Travel(root);
        if(!root) return;
        TreeNode* now = root;
        for(vector<TreeNode*>::size_type i = 1; i < vTN.size(); ++i){
            now->left = NULL;
            now->right = vTN[i];
            now = now->right;
        }
        now->left = now->right = NULL;
    }
    void Preorder_Travel(TreeNode* root){
        if(!root) return;
        vTN.push_back(root);
        Preorder_Travel(root->left);
        Preorder_Travel(root->right);
    }
};
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
    vector<string> vs_;
    void dfs(TreeNode* root, string s){
        if(!root) return;
        if(!root->left && !root->right){
           char t[20] = "";
           sprintf(t, "->%d", root->val);
           vs_.push_back(s + string(t));
           return;
        }
        else{
           char t[20] = "";
           sprintf(t, "->%d", root->val);
           dfs(root->left, s + string(t));
           dfs(root->right, s + string(t));
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vs_.clear();
        if(!root) return vs_;
        char t[20] = "";
        sprintf(t, "%d", root->val);
        string s(t);
        if(!root->left && !root->right){
            vs_.push_back(s);
            return vs_;
        }
        dfs(root->left, s);
        dfs(root->right, s);
        return vs_;
    }
};
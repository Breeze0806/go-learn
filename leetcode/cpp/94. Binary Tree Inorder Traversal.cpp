/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   void dfs(vector<int> &ans,TreeNode *root){
    	if(!root){
    		return;
    	}
    	dfs(ans,root->left);
    	ans.push_back(root->val);
    	dfs(ans,root->right);
    }
    vector<int> inorderTraversal(TreeNode *root) {
    	vector<int> ans;
    	dfs(ans,root);
    	return ans;
    }
};
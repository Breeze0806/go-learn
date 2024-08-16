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
    	ans.push_back(root->val);
    	dfs(ans,root->left);
    	dfs(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode *root) {
    	vector<int> ans;
    	dfs(ans,root);
    	return ans;
    }
};
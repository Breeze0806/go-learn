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
    void BST(vector<int>& nums, int s, int e, TreeNode* &root){
        if(e <= s) return;
        int k = s + (e - s )/2;
        root = new TreeNode(nums[k]);
        BST(nums, s, k, root->left);
        BST(nums, k+1, e, root->right);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = NULL;
        BST(nums,0,nums.size(),root);
        return root;
    }
};
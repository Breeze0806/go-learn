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

    int sum;
    void addNumbers(TreeNode* root, int num){
        if(!root) return;
        if(!root->left && !root->right){
            sum += num * 10 + root->val;
            return;
        }
        else{
            addNumbers(root->left, num * 10 + root->val);
            addNumbers(root->right, num * 10 + root->val);
        }
    }

    int sumNumbers(TreeNode* root) {
        sum = 0;
        addNumbers(root ,0);
        return sum;
    }
};
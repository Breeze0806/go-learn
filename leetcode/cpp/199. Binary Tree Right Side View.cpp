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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> v;
        if(!root) return v;

        v.push_back(root->val);
        root->val = 1;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* now = q.front();
            q.pop();
            if(!now) continue;

            q.push(now->left);
            q.push(now->right);

            if(now->val < v.size()){
                if(now->left) v[now->val] = now->left->val;
            }
            else{
                if(now->left) v.push_back(now->left->val);
            }

            if(now->val < v.size()){
                if(now->right) v[now->val] = now->right->val;
            }
            else{
                if(now->right) v.push_back(now->right->val);
            }

            if(now->left) now->left->val = now->val + 1;
            if(now->right) now->right->val = now->val + 1;
        }

        return v;
    }
};
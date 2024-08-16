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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;
        vector<int> t;

        t.push_back(root->val);
        v.push_back(t);
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
                if(now->left) v[now->val].push_back(now->left->val);
                if(now->right) v[now->val].push_back(now->right->val);
            }
            else{
                vector<int> t;
                if(now->left) t.push_back(now->left->val);
                if(now->right) t.push_back(now->right->val);
                if(t.size() != 0)v.push_back(t);
            }
            if(now->left) now->left->val = now->val + 1;
            if(now->right)now->right->val = now->val + 1;
        }
        //reverse(v.begin(),v.end());
        return v;
    }
};
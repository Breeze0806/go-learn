class Solution {
public:
    int depth(TreeNode* root){
        if(!root) return 10000000;
        else if(!root->left && !root->right) return 1;
        else return min(depth(root->left),depth(root->right)) + 1;
    }
    int minDepth(TreeNode* root) {

        int d = depth(root);
        return (d>=1000000)?0:d;
    }
};
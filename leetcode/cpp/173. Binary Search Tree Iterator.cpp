/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
    stack<TreeNode*> stn;
public:
    BSTIterator(TreeNode *root) {
        for(;root; root = root->left){
            stn.push(root);
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !stn.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* root = stn.top();
        stn.pop();
        for(TreeNode* now = root->right; now; now = now->left){
            stn.push(now);
        }
        return root->val;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
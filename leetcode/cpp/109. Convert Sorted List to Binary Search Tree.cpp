/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode* now;
    void PreOrderBST(TreeNode* &root,int s, int e){
        if(s >= e) return;
        root = new TreeNode(0);
        int k = s + (e-s)/2;
        PreOrderBST(root->left, s, k);
        root->val = now->val;
        now = now->next;
        PreOrderBST(root->right, k + 1, e);
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int cnt = 0;
        for(now = head; now; now = now->next, ++cnt);
        now = head;
        TreeNode* root = NULL;
        PreOrderBST(root, 0, cnt);
        return root;
    }
};
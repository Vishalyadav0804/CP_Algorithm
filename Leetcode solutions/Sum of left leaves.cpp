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
    int sum(TreeNode* root,bool isLeft) {
        if (!root) return 0;
        int s = !root->left && !root->right && isLeft ? root->val : 0;
        return s + sum(root->left, true) + sum(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root,false);
    }
};

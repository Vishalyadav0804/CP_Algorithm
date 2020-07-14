/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void recur (TreeNode* root, int& last, int& minm) {
        if (!root) return;
        recur(root->left, last, minm);
        if (abs(root->val-last) < minm) {
            minm = abs(root->val-last);
        }
        last = root->val;
        recur(root->right, last, minm);
    }
    int minDiffInBST(TreeNode* root) {
        int last = INT_MAX, minm = INT_MAX;
        recur(root, last, minm);
        return minm;
    }
};

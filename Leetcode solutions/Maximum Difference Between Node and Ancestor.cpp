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
    int maxDiff;
    void traverse(TreeNode* root, int max, int min)
    {
        if (root == nullptr) {
            return;
        }
        if (root->val > max) {
            max = root->val;
        }
        if (root->val < min) {
            min = root->val;
        }
        if (max - min > maxDiff) {
            maxDiff = max - min;
        }
        traverse(root->left, max, min);
        traverse(root->right, max, min);
    }
    int maxAncestorDiff(TreeNode* root) {
        maxDiff = 0;
        traverse(root, 0, INT_MAX);
        return maxDiff;
    }
};

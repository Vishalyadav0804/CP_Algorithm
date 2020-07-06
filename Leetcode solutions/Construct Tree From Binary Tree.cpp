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
    void helper(TreeNode* t, string &result) {
        if(t == NULL)
            return;
        result += to_string(t->val);
        if(t->left) {
            result += '(';
            helper(t->left, result);
            result += ')';
        }
        else if(t->left == NULL && t->right != NULL) {
            result += '(';
            result += ')';
        }
        
        if(t->right) {
            result += '(';
            helper(t->right, result);
            result += ')';
        }
    }
    string tree2str(TreeNode* t) {
        string result = "";
        helper(t, result);
        return result;
    }
};

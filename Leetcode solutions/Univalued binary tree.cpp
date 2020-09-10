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
    bool check(TreeNode* root,int x){
        if(root==nullptr) return true;
        if(root->val!=x) return false;
        return check(root->left,x) && check(root->right,x);
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root) return true;
        int x=root->val;
        if(check(root,x)) return true;
        return false;
    }
};

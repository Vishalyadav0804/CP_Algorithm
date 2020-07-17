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
    bool checkSymmetry(TreeNode *leftside,TreeNode *rightside){
        if(leftside==NULL && rightside==NULL) return true;
        if(leftside==NULL || rightside==NULL) return false;
        if(leftside->val==rightside->val) 
            return checkSymmetry(leftside->left,rightside->right) && checkSymmetry(leftside->right,rightside->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return checkSymmetry(root->left,root->right);
    }
};

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
    int helper(TreeNode *root,int &lm,int &rm){
        if(root==NULL) return 0;
        int lm1=0,lm2=0,rm1=0,rm2=0;
        lm=helper(root->left,lm1,rm1);
        rm=helper(root->right,lm2,rm2);
        return max(root->val+lm1+lm2+rm1+rm2,lm+rm);
    }
    int rob(TreeNode* root) {
        int lm=0,rm=0;
        return helper(root,lm,rm);
    }
};

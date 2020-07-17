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
    int sum=0,finalsum=0;
    int sumNumbers(TreeNode* root) {
        findsum(root);
        return finalsum;
    }
    void findsum(TreeNode *root){
        if(root==NULL) return;
        sum=sum*10+root->val;
        if(root->left==NULL && root->right==NULL){
            finalsum+=sum;
        }
        findsum(root->left);
        findsum(root->right);
        sum=sum/10;
    }
};

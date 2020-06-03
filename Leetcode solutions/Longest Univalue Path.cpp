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
    int countPath(TreeNode* root,int &len){
        if(root==NULL){
            return 0;
        }
        int left=countPath(root->left,len);
        int right=countPath(root->right,len);
        if(!root->left || root->left->val!=root->val){
            left=0;
        }
        if(!root->right || root->right->val!=root->val){
            right=0;
        }
        len=max(len,left+right);
        return max(left,right)+1;
    }
    int longestUnivaluePath(TreeNode* root) {
        int len=0;
        countPath(root,len);
        return len;
    }
};

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
    int value,z;
    void fun(TreeNode *root){
        if(root==NULL) return;
        fun(root->left);
        z--;
        if(z==0)
            value=root->val;
        fun(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        z=k;
        fun(root);
        return value;
    }
};

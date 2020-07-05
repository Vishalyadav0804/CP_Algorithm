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
    void greaterTree(TreeNode* root,int &val){
        if(!root) return;
        greaterTree(root->right,val);
        root->val=root->val+val;
        val=root->val;
        greaterTree(root->left,val);
        return;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int val=0;
        greaterTree(root,val);
        return root;
    }
};

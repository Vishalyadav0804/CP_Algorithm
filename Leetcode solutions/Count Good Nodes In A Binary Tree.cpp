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
    int count=0;
    void dfs(TreeNode *root,int z){
        if(root==nullptr) return;
        if(root->val >= z){
            count++;
        }
        dfs(root->left,max(z,root->val));
        dfs(root->right,max(z,root->val));
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        dfs(root,INT_MIN);
        return count;
    }
};

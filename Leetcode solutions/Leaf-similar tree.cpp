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
    void getleaf(TreeNode *root,vector<int> &v){
        if(root==nullptr) return;
        if(root->left==nullptr && root->right==nullptr) v.push_back(root->val);
        getleaf(root->left,v);
        getleaf(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        getleaf(root1,v1);
        getleaf(root2,v2); 
        if(v1==v2) return true;
        return false;
    }
};

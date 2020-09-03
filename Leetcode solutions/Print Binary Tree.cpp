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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void helper(vector<vector<string>> &res,TreeNode* root,int row,int start,int end){
        if(root==nullptr) return;
        int mid=(start+end)/2;
        res[row][mid]=to_string(root->val);
        helper(res,root->left,row+1,start,mid-1);
        helper(res,root->right,row+1,mid+1,end);
    }
    vector<vector<string>> printTree(TreeNode* root) {
        vector<vector<string>> v;
        if(root==NULL) return v;
        int row=height(root);
        int col=pow(2,row)-1;
        vector<vector<string>> res(row, vector<string>(col, ""));
        helper(res, root, 0, 0, col-1);
        return res;
    }
};

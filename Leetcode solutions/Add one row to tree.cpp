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
    void helper(TreeNode *root,int v,int d,int level){
        if(root==NULL) return;
        if(level==d-1){
            TreeNode *templ=root->left;
            TreeNode *tempr=root->right;
            root->left=new TreeNode(v);
            root->right=new TreeNode(v);
            root->left->left=templ;
            root->right->right=tempr;
        }
        helper(root->left,v,d,level+1);
        helper(root->right,v,d,level+1);
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        int level=1;
        if(d==1){
            TreeNode *temp=root;
            root=new TreeNode(v);
            root->left=temp;
            root->right=NULL;
        }
        helper(root,v,d,level);
        return root;
    }
};

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
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        
        flatten(root->left);
        flatten(root->right);
        
        TreeNode* rightFlatTree = root->right;
        root->right = root->left;
        root->left = NULL;
        
        TreeNode* tempNode = root;
        while(tempNode->right!=NULL)
            tempNode=tempNode->right;
        
        tempNode->right = rightFlatTree;
        
    }
};

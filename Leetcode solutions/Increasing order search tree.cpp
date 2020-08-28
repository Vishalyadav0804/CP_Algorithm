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
    TreeNode* cur_node;
    void traverse(TreeNode* root){
        if(root->left != NULL)
          traverse(root->left);
        
        TreeNode* new_node = new TreeNode(root->val);;
        cur_node->right = new_node;
        cur_node = new_node;
             
        if(root->right != NULL)
          traverse(root->right);  
        
        return;        
    }
    TreeNode* increasingBST(TreeNode* root) {
        cur_node = new TreeNode();
        TreeNode* top_root = cur_node;
        traverse(root);
        return top_root->right;
    }
};

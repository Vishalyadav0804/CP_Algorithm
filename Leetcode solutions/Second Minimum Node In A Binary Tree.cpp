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
    set<int> s;
    void traverse(TreeNode *root){
        if(root==nullptr) return;
        traverse(root->left);
        traverse(root->right);
        s.insert(root->val);
    }
    int findSecondMinimumValue(TreeNode* root) {
        traverse(root);
        int k=0;
        for(auto x:s){
            if(k==1)
                return x;
            k++;
        }
        return -1;
    }
};

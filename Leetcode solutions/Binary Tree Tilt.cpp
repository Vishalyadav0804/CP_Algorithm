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
    int getTilt(TreeNode* root,int &tilt){
        if(!root) return 0;
        int l=getTilt(root->left,tilt);
        int r=getTilt(root->right,tilt);
        tilt=tilt+abs(l-r);
        return root->val+l+r;
    }
    int findTilt(TreeNode* root) {
        int tilt=0;
        getTilt(root,tilt);
        return tilt;
    }
};

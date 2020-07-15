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
    int pathcount=0;
    void getSum(TreeNode *root,int sum){
        if(!root) return;
        if(root->val==sum) pathcount++;
        getSum(root->left,sum-root->val);
        getSum(root->right,sum-root->val);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root!=NULL){
            getSum(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);    
        }
        return pathcount;
    }
};

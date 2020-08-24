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
    vector<TreeNode*> res;
    TreeNode* del(TreeNode* root,int target){
        if(root==NULL) return NULL;
        root->left=del(root->left,target);
        root->right=del(root->right,target);
        if(root->val==target && root->left==NULL && root->right==NULL) return NULL;
        else if(root->val==target ){
            if(root->left){
                res.push_back(root->left);
            }
            if(root->right){
                res.push_back(root->right);
            }
            return NULL;
        }
        
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        sort(to_delete.begin(),to_delete.end());
        for(int i=to_delete.size()-1;i>=0;i--){
            del(root,to_delete[i]);
        }
        
        if(root && find(to_delete.begin(),to_delete.end(),root->val)==to_delete.end()){
            res.push_back(root);
        }
        
        
        return res;
    }
};

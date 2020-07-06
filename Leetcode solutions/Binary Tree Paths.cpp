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
    void preorder(vector<string>& v,TreeNode* r,string t){
        if(!r)
            return;
        if(!t.empty())
            t+=("->"+to_string(r->val));
        else t+=to_string(r->val);
        if(r->left||r->right){
            preorder(v,r->left,t);
            preorder(v,r->right,t);
        }else{
            v.push_back(t);
        }
    }   
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        if(root)
            preorder(v,root,"");
        return v;
    }
};

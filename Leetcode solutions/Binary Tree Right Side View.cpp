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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode *f=q.front();
            if(f==NULL){
                ans.push_back(v[v.size()-1]);
                v.clear();
                q.pop();
                if(!q.empty()) q.push(NULL);
            }else{
                v.push_back(f->val);
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
        }
        return ans;
    }
};

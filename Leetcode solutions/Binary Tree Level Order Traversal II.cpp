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
    vector<int> v;
    vector<vector<int>> ans;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* f = q.front();
            if(f==NULL){
                //cout<<endl;
                ans.push_back(v);
                v.clear();
                q.pop();
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                v.push_back(f->val);
                q.pop();

                if(f->left){
                    q.push(f->left);
                }
                if(f->right){
                    q.push(f->right);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

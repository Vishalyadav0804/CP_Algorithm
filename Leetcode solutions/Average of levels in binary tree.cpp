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
    vector<int> v;
    vector<double> res;
    double ans=0.0;
    void bfs(TreeNode *root){
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* f = q.front();
            if(f==NULL){
                for(int i=0;i<v.size();i++){
                    ans+=v[i];
                }
                res.push_back(ans/v.size());
                ans=0;
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
        return;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        bfs(root);
        return res;
    }
};

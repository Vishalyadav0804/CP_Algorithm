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
    int findSum(TreeNode* root,vector<int> &v){
        if(root==NULL) return 0;
        int current=root->val+findSum(root->left,v)+findSum(root->right,v);
        v.push_back(current);
        return current;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> v;
        if(root==NULL) return v;
        findSum(root,v);
        unordered_map<int,int> map;
        for(int i=0;i<v.size();i++){
            map[v[i]]++;
        }
        int res=0;
        for(auto x:map){
            res=max(res,x.second);
        }
        vector<int> ans;
        for(auto x:map){
            if(x.second==res){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};

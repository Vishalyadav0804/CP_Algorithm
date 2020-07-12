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
    unordered_map<int,int> mp;
    void helper(TreeNode *root){
        if(root==nullptr) return;
        
        mp[root->val]++;
        helper(root->left);
        helper(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if(root==nullptr) return {};
        if(root->left==nullptr && root->right==nullptr){
            return {root->val};
        }
        helper(root);
        int max_=0;
        vector<int> ans;
        for(auto i:mp){
            
            max_=max(max_,i.second);
        }
        for(auto i:mp){
            if(i.second==max_) ans.push_back(i.first);
        }
        return ans;
    }
};

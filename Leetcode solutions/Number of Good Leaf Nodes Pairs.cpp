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
    int ans;
    int countPairs(TreeNode* root, int distance) {
    
        ans = 0;
        helper(root,distance);
        return ans;
    }
    void getLeaf(TreeNode* root,int d,vector<pair<int,int>>& q)
    {
        if(!root) return;
        if(root->left==NULL and root->right==NULL)
        {
            q.push_back({d,root->val});
            return;
        }
        getLeaf(root->left,d+1,q);
        getLeaf(root->right,d+1,q);
    }
    void helper(TreeNode* root,int distance)
    {
        if(!root) return;
        vector<pair<int,int>> l,r;
        getLeaf(root->left,1,l);
        getLeaf(root->right,1,r);
        sort(l.begin(),l.end());
        sort(r.begin(),r.end());
        for(int i=0;i<l.size();i++)
        {
            if(l[i].first>distance) break;
            for(int j=0;j<r.size();j++)
            {
                if(l[i].first+r[j].first<=distance)
                    ans++;
                else break;
            }
        }
        helper(root->left,distance);
        helper(root->right,distance);
    }
};

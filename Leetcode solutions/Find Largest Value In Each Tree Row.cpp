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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty())
        {
            int mx = INT_MIN;
            int size = q.size();
            for(int i = 0; i < size; ++i)
            {
                auto node = q.front(); q.pop();
                mx = max(mx, node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right); 
            }
            res.push_back(mx);
        }
        return res;
    }
};

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
     vector <int> graph[1005];
    set <int> vis;
    
    void build(TreeNode *root) {
        if(!root) return;
        
        if(root->left) {
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
        }
        if(root->right) {
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
        }
        
        build(root->left);
        build(root->right);
    }
    
    void bfs(vector <int> &ans, int x, int K) {
        queue < pair<int, int> > q;
        
        q.push({ x, 0 });
        
        while(!q.empty()) {
            pair <int, int> top = q.front();
            q.pop();
            
            int node = top.first, level = top.second;
            vis.insert(node);
            
            if(level == K) {
                ans.push_back(node);
            }
            
            for(int i=0;i<graph[node].size();i++) {
                if(vis.find(graph[node][i]) == vis.end())
                    q.push({ graph[node][i], level + 1 });
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        build(root);
        vector <int> ans;
        bfs(ans, target->val, K);
        return ans;
    }
};

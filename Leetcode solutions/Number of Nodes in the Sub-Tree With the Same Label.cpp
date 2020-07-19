class Solution {
public:
    vector<int> visited;
    void dfs(unordered_map<int, vector<int>>& gp, vector<vector<int>>& dp, int start) {
        visited[start] = 1;
        for (auto& value : gp[start]) {
            if (!visited[value]) {
                dfs(gp, dp, value);
                for (int i = 0; i < 26; i++) {
                    dp[start][i] += dp[value][i];
                }
            }
        }
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        unordered_map<int, vector<int>> gp;
        vector<vector<int>> dp(n, vector<int> (26, 0));
        for (int i = 0; i < n; i++) dp[i][labels[i] - 'a'] = 1;
        vector<int> result(n, 0); 
        visited.resize(n, 0);
        for (auto& edge : edges) {
            gp[edge[0]].push_back(edge[1]);
            gp[edge[1]].push_back(edge[0]);
        }
            
        dfs(gp, dp, 0);
        for (int i = 0; i < n; i++) {
            result[i] = dp[i][labels[i] - 'a'];
        }
        return result;
    }
};

class Solution {
public:
    bool dfs(vector<vector<int>> &graph,int x,vector<int> &dp){
        if(dp[x])
            return dp[x]==1;
        dp[x]=-1;
        for(auto it=graph[x].begin();it!=graph[x].end();it++){
            if(!dfs(graph,*it,dp))
                return false;
        }
        dp[x]=1;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> res;
        int V=graph.size();
        vector<int> dp(V,0);
        for(int i=0;i<V;i++){
            if(dfs(graph,i,dp)){
                res.push_back(i);
            }
        }
        return res;
    }
};

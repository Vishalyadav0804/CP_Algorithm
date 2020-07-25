class Solution {
public:
    void dfs(vector<vector<int>> &graph,int node,vector<vector<int>> &res,vector<int> v){
        v.push_back(node);
        if(node==graph.size()-1)
            res.push_back(v);
        else{
            for(int i=0;i<graph[node].size();i++){
                dfs(graph,graph[node][i],res,v);
            }
        }
        v.pop_back();
        return;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> v;
        dfs(graph,0,res,v);
        return res;
    }
};

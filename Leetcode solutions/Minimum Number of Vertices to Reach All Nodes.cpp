class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> v(n,false);
        for(auto x:edges){
            v[x[1]]=true;
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            if(v[i]==false)
                res.push_back(i);
        }
        return res;
    }
};

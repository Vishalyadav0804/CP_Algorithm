class Solution {
public:
    void backtrack(vector<vector<int>>& res, int size, int k, int n, int cur, int sum, vector<int>comb){
        if(k == 0 || cur>9){
            if(sum == n && comb.size() == size) res.push_back(comb);
            return;
        }
        comb.push_back(cur);
        backtrack(res, size, k-1, n, cur+1, sum+cur,comb);
        comb.pop_back();
        backtrack(res, size, k, n, cur+1, sum, comb);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        backtrack(res,k,k,n,1,0,vector<int>());
        return res;
    }
};

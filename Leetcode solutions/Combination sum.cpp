class Solution {
public:
    void helper(int start,int target,vector<int> &list,vector<vector<int>> &result,vector<int> &candidates){
        if(target==0){
            result.push_back(list);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i]>target){
                return;
            }
            list.push_back(candidates[i]);
            helper(i,target-candidates[i],list,result,candidates);
            list.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> list;
        int n=candidates.size();
        if(n==0) return result;
        sort(candidates.begin(),candidates.end());
        helper(0,target,list,result,candidates);
        return result;
    }
};

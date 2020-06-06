class Solution {
public:
    void helper(vector<int> &candidates,int index,int target,vector<int> &list,vector<vector<int>> &result){
        if(target==0){
            result.push_back(list);
            return;
        }
        if(target<0) return;
        for(int i=index;i<candidates.size();i++){
            if(i==index || candidates[i]!=candidates[i-1]){
                list.push_back(candidates[i]);
                helper(candidates,i+1,target-candidates[i],list,result);
                list.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> list;
        sort(candidates.begin(),candidates.end());
        helper(candidates,0,target,list,result); 
        return result;
    }
};

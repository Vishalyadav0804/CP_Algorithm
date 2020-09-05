class Solution {
public:
    void dfs(set<vector<int>> &s,vector<int> &nums,int pos){
        if(pos==nums.size()-1){
            s.insert(nums);
            return;
        }
        for(int i=pos;i<nums.size();i++){
            swap(nums[pos],nums[i]);
            dfs(s,nums,pos+1);
            swap(nums[pos],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> res;
        dfs(s,nums,0);
        for(auto x:s){
            res.push_back(x);
        }
        return res;
    }
};

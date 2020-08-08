class Solution {
public:
    void subset(vector<int> &nums,int index,vector<int> &list,vector<vector<int>> &result){
        result.push_back(list);
        for(int i=index;i<nums.size();i++){
            if(i==index||nums[i]!=nums[i-1]){
                list.push_back(nums[i]);
                subset(nums,i+1,list,result);
                list.pop_back();    
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> list;
        sort(nums.begin(),nums.end());
        subset(nums,0,list,result);
        return result;
    }
};

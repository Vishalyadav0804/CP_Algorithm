class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                swap(nums[i][j],nums[j][i]);
            }
        }
        for(auto &row:nums){
            reverse(row.begin(),row.end());
        }
    }
};

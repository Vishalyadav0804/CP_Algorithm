class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int prev=nums[nums.size()-1],curr=nums[nums.size()-2];
        return (prev-1)*(curr-1);
    }
};

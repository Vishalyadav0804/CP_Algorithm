class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        if(nums[0]>target)
            return 0;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==target && nums[i+1]>target){
                return i;
            }
            if(nums[i]!=target && nums[i+1]>target){
                return i+1;
            }
        }
        if(nums[nums.size()-1]==target){
            return nums.size()-1;
        }
        return nums.size();
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        if(nums.size()<2)
            return nums.size();
        /*if(nums.size()==2 && nums[0]!=nums[1]){
            return 2;
        }
        if(nums.size()==2 && nums[0]==nums[1]){
            return 1;
        }*/
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[count]=nums[i];
                //i++;
                count++;
            }
        }
        nums[count]=nums[nums.size()-1];
        count++;
        return count;
    }
};

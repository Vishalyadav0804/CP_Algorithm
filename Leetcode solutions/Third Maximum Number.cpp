class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // if(nums.size()==0){
        //     return -inf";
        // }
        sort(nums.begin(),nums.end());
        if(nums.size()<3){
            return nums[nums.size()-1];
        }
        int k=0;
        for(int i=nums.size()-1;i>=0;i--){
            int m=nums[i];
            while(i!=0 && nums[i]==nums[i-1]){
                i--;
            }
            k++;
            if(k==3){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int z=0;
        for(int i=nums.size()-1;i>=0;i--){
            // while(i!=0 && nums[i]==nums[i-1]){
            //     i--;
            // }
            z++;
            if(z==k){
                return nums[i];
            }
        }
        return -1;
    }
};

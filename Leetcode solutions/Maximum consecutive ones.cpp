class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            int j=i,z=0;
            while(j<nums.size() && nums[j]==1){
                j++;
                z++;
            }
            max1=max(max1,z);
            i=j;
        }
        return max1;
    }
};

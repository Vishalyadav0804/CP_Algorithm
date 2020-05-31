class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxsum=INT_MIN,i;
        for(i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(maxsum<sum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            }
            //maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};

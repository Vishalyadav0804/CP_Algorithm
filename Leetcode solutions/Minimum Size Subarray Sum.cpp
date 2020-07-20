class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l=0,r=0,n=nums.size(),len=INT_MAX,sum=0;
        while(r<n){
            sum=sum+nums[r];
            r++;
            while(sum>=s){
                len=min(len,r-l);
                sum=sum-nums[l];
                l++;
            }
        }
        if(len==INT_MAX)
            return 0;
        return len;
    }
};

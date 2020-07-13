class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return nums;
        sort(nums.begin(),nums.end());
        vector<int> dp(n,1);
        vector<int> res;
        int max=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    if(max<dp[i])
                        max=dp[i];
                }
            }
        }
        int temp=-1;
        for(int i=n-1;i>=0;i--){
            if(max==dp[i] && (temp%nums[i]==0 || temp==-1)){
                res.push_back(nums[i]);
                max--;
                temp=nums[i];
            }
        }
        return res;
    }
};

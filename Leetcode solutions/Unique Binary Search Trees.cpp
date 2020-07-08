class Solution {
public:
    int dp[1000]={0};
    int numTrees(int n) {
        if(n==0)
            return 1;
        if(dp[n]!=0){
            return dp[n];
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=numTrees(i-1)*numTrees(n-i);
        }
        dp[n]=ans;
        return ans;
    }
};

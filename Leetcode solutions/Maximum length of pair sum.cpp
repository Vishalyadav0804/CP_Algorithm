class Solution {
public:
    bool static comapre(vector<int> a,vector<int> b){
        return a[0]<b[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        if(n==0) return 0;
        sort(pairs.begin(),pairs.end(),comapre);
        int ans=1;
        vector<int> dp(n,1);
        dp[0]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(pairs[j][1]<pairs[i][0]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};

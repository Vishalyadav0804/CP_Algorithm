class Solution {
public:
    static bool compare(vector<int>& v1, vector<int>& v2){
        return v1[0]*v1[1] < v2[0]*v2[1];
    } 
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n=envelopes.size();
        if(n==0) return 0;
        int ans=1;
        vector<int> dp(n,0);
        sort(envelopes.begin(),envelopes.end(),compare);
        dp[0]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(envelopes[j][0] < envelopes[i][0] && envelopes[j][1]<envelopes[i][1]){
                    dp[i] = max(dp[i], dp[j]);
                }
            }
            dp[i]++;
        }
        for(int i=0;i<n;i++){
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};

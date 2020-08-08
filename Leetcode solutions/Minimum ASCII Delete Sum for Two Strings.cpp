class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m = s1.length(); 
        int n = s2.length();
        int dp[m+1][n+1];
        dp[0][0]=0;
        // s1 down the column, s2 at top
        //   _       s    e    a
        // _ 0       s    s,e  s,e,a
        // e e       
        // a e,a
        // t e,a,t
        
        for(int k = 1; k <= n; k++){
            dp[0][k] = dp[0][k-1] + s2[k-1];
        }
        for(int k = 1; k <= m; k++){
            dp[k][0] = dp[k-1][0] + s1[k-1];
        }  
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    int left = dp[i][j-1] + s2[j-1];
                    int top = dp[i-1][j] + s1[i-1];
                    dp[i][j] = min(left,top);
                }
                
            }
        }

        return dp[m][n];
    }
};

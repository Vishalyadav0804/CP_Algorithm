class Solution {
public:
    int findMaxArea(vector<vector<char>> matrix, int m, int n){
        int dp[m+1][n+1];
        int max=INT_MIN;
        for(int i=0;i<=m;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=n;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(matrix[i-1][j-1]=='0'){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                    if(dp[i][j]>max){
                        max=dp[i][j];
                    }   
                }
            }
        }
        if(max!=INT_MIN){
            return max*max;
        }
        return 0;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0){
            return 0;
        }
        int n=matrix[0].size();
        return findMaxArea(matrix,m,n);
    }
};

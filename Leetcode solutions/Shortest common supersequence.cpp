class Solution {
public:
    string findlcs(string X,string Y,int m,int n){
        int dp[m+1][n+1];
        string str="";
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0){
                    dp[i][j]=j;
                }
                else if(j==0){
                    dp[i][j]=i;
                }
                else if(X[i-1]==Y[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]= 1+min(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int i=m,j=n;
        while(i>0 && j>0){
            if(X[i-1]==Y[j-1]){
                str+=X[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                str+=Y[j-1];
                j--;
            }
            else{
                str+=X[i-1];
                i--;
            }
        }
        while(i>0){
            str+=X[i-1];
            i--;
        }
        while(j>0){
            str+=Y[j-1];
            j--;
        }
        reverse(str.begin(),str.end());
        return str;
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();
        return findlcs(str1,str2,m,n);
    }
};

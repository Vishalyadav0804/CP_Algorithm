class Solution {
public:
    int m,n;
    void dfs(vector<vector<int>> &A,int i,int j){
        if(i<0 || j<0 || i>=m || j>=n)
            return;
        if(A[i][j]!=1) return;
        A[i][j]=-1;
        dfs(A,i+1,j);
        dfs(A,i-1,j);
        dfs(A,i,j+1);
        dfs(A,i,j-1);
    }
    int numEnclaves(vector<vector<int>>& A) {
        if(A.size()==0) return 0;
        m=A.size();
        n=A[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==m-1 || j==n-1){
                    dfs(A,i,j);
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(A[i][j]==1)
                    ans++;
            }
        }
        return ans;
    }
};

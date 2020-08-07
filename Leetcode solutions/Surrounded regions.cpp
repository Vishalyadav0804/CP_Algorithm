class Solution {
public:
    int m,n;
    vector<vector<char>> arr;
    void dfs(vector<vector<char>> &board,int i,int j){
        if(i<0 || j<0 || i>=m || j>=n) return;
        if(arr[i][j]!='O') return;
        arr[i][j]='X';
        dfs(board,i+1,j);
        dfs(board,i-1,j);
        dfs(board,i,j+1);
        dfs(board,i,j-1);
    }
    void solve(vector<vector<char>>& board) {
        if(board.size()==0) return;
        arr=board;
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==m-1 || j==n-1){
                    dfs(board,i,j);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]=='O' && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};

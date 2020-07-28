class Solution {
public:
    bool isPerimeter(int i,int j,int m,int n){
        return i==0 || j==0 || i==m-1 || j==n-1;
    }
    bool isClosed(vector<vector<int>> &grid,int i,int j,int m,int n){
        if(grid[i][j]==-1 || grid[i][j]==1)
            return true;
        if(isPerimeter(i,j,m,n))
            return false;
        grid[i][j]=-1;
        bool up=isClosed(grid,i-1,j,m,n);
        bool down=isClosed(grid,i+1,j,m,n);
        bool left=isClosed(grid,i,j-1,m,n);
        bool right=isClosed(grid,i,j+1,m,n);
        return up && down && left && right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==0){
                    if(isClosed(grid,i,j,m,n)){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

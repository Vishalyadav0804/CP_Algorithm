class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        if(!m)return grid;
        int n=grid[0].size();
        vector<vector<int>>sol(m,vector<int>(n));
        int i,j;
		for(i=0;i<m;i++) 
			for(j=0;j<n;j++) 
				sol[(i+(j+k)/n)%m][(j+k)%n]=grid[i][j];
        return sol;
    }
};

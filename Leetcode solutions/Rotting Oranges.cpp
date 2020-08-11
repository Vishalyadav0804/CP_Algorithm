class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         int n=grid.size();
        int freshOranges=0;
        queue <pair<int,int>> q; //pair is for rows and columns respectively
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }else if(grid[i][j]==1){
                    freshOranges++;
                }
            }
        }
        if(freshOranges==0) return 0;
        vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int time=0;
        while(q.size()!=0){
            int size=q.size();
            while(size-->0){
                pair<int,int> rvtx=q.front();
                q.pop();
                
                for(int i=0;i<4;i++){
                    int r=rvtx.first+dir[i][0];
                    int c=rvtx.second+dir[i][1];
                    
                    if(r>=0 && c>=0 && r<grid.size() && c<grid[0].size() && grid[r][c]==1){
                        grid[r][c]=2;
                        q.push({r,c});
                        freshOranges--;
                    }
                }
                
            }
            time++;
        }
        return freshOranges!=0?-1:time-1;
    }
};

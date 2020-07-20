class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> v=board;
        int count=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                count=0;
                if(v[i][j]==0)
                {
                    if(((i-1)>=0)&&((j-1)>=0))
                        if(board[i-1][j-1]==1)
                            count++;
                    if(((i-1)>=0)&&((j)>=0))
                        if(board[i-1][j]==1)
                            count++;
                    if(((i-1)>=0)&&((j+1)<board[i].size()))
                        if(board[i-1][j+1]==1)
                            count++;
                    if(((i)>=0)&&((j-1)>=0))
                        if(board[i][j-1]==1)
                            count++;
                    if(((i)>=0)&&((j+1)<board[i].size()))
                        if(board[i][j+1]==1)
                            count++;
                    if(((i+1)<board.size())&&((j-1)>=0))
                        if(board[i+1][j-1]==1)
                            count++;
                    if(((i+1)<board.size()))
                        if(board[i+1][j]==1)
                            count++;
                    if(((i+1)<board.size())&&((j+1)<board[i].size()))
                        if(board[i+1][j+1]==1)
                            count++;
                       
                    if(count==3)
                        v[i][j]=1;
                }
                else if(v[i][j]==1)
                {     
                    if(((i-1)>=0)&&((j-1)>=0))
                        if(board[i-1][j-1]==1)
                            count++;
                    if(((i-1)>=0)&&((j)>=0))
                        if(board[i-1][j]==1)
                            count++;
                    if(((i-1)>=0)&&((j+1)<board[i].size()))
                        if(board[i-1][j+1]==1)
                            count++;
                    if(((i)>=0)&&((j-1)>=0))
                        if(board[i][j-1]==1)
                            count++;
                    if(((i)>=0)&&((j+1)<board[i].size()))
                        if(board[i][j+1]==1)
                            count++;
                    if(((i+1)<board.size())&&((j-1)>=0))
                        if(board[i+1][j-1]==1)
                            count++;
                    if(((i+1)<board.size()))
                        if(board[i+1][j]==1)
                            count++;
                    if(((i+1)<board.size())&&((j+1)<board[i].size()))
                        if(board[i+1][j+1]==1)
                            count++;
                    
                    if((count<2)||(count>3))
                        v[i][j]=0;
                }
            }
        }
        board=v;
    }
};

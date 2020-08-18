class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int i=0,j=0,k=0,s=0;
        
        for(i=0;i<board.size();i++)
        {
            for(j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='R')
                    {
                    for(k=j+1;k<8;k++)
                    {
                        if(board[i][k]=='p')
                        {
                            ++s;
                            break;
                        }
                         if(board[i][k]=='B')
                            break;
                    }
                    for(k=j-1;k>=0;k--)
                    {
                        if(board[i][k]=='p')
                        {
                            ++s;
                            break;
                        }
                        if(board[i][k]=='B')
                            break;
                    }

                    for(k=i+1;k<8;k++)
                    {
                        if(board[k][j]=='p')
                        {
                            ++s;
                            break;
                        }
                         if(board[k][j]=='B')
                            break;
                    }

                    for(k=i-1;k>=0;k--)
                    {
                        if(board[k][j]=='p')
                        {
                            ++s;
                            break;
                        }
                         if(board[k][j]=='B')
                            break;
                    } 
                }
            }
        }   
        
        return s;
    }
};

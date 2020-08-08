class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        if(board.empty()) return {};
        int row = board.size(), col = board[0].size();
        int res = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(board[i][j] == 'X'){
                    int x = i - 1, y = j;
                    bool top = false, left = false;
                    if(x < 0 || y < 0 || x >= row || y >= col){
                        top = true;
                    }
                    else if(board[x][y] == '.'){
                        top = true;
                    }
                    x = i, y = j - 1;
                    if(x < 0 || y < 0 || x >= row || y >= col){
                        left = true;
                    }
                    else if(board[x][y] == '.'){
                        left = true;
                    }
                    if(top && left) res++;
                }
            }
        }
        return res;
    }
};

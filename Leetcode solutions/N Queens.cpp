class Solution {
public:
    bool helper(vector<string> &temp,int row,int col){
        for(int i=0;i<row;i++){
            if(temp[i][col]=='Q')
                return false;
        }
        for(int i=0;i<col;i++){
            if(temp[row][i]=='Q')
                return false;
        }
        int r = row-1, c = col-1;
        while(r >= 0 && c >= 0) {
            if(temp[r--][c--] == 'Q') return false;
        }
        r = row-1, c = col+1;
        while(r >= 0 && c < temp.size()) {
            if(temp[r--][c++] == 'Q') return false;
        }
        return true;
    }
    void solveNQueen(vector<vector<string>> &result,vector<string> &temp,int pos,int left){
        int n=temp.size();
        if(left==0){
            result.push_back(temp);
            return;
        }
        else if(pos>=n*n) return;
        int row=pos/n;
        int col=pos%n;
        if(helper(temp,row,col)){
            temp[row][col]='Q';
            solveNQueen(result,temp,pos+1,left-1);
            temp[row][col]='.';
        }
        solveNQueen(result,temp,pos+1,left);
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;
        vector<string> temp(n, string(n, '.'));
        solveNQueen(result,temp,0,n);
        return result;
    }
};

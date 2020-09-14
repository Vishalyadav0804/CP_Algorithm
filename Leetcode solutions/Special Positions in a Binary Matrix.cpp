class Solution {
public:
    bool row(vector<vector<int>> &mat,int idx,int one){
        for(int j=0;j<mat[0].size();j++){
            if(mat[idx][j]==1 && j!=one) return false;
        }
        return true;
    }
    bool col(vector<vector<int>> &mat,int one,int idx){
        for(int i=0;i<mat.size();i++){
            if(mat[i][idx]==1 && i!=one) return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    if(row(mat,i,j) && col(mat,i,j)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

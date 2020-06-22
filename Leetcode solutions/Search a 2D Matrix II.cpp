class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int i = m-1,j = 0;
        if(m == 0 ) return false;
        int n = matrix[0].size();
        
        while( i >= 0 && j < n){
            if( matrix[i][j] == target ) return true;
            if( target > matrix[i][j]) j+=1;
            else i-=1;
        }
        
        
        return false;
    }
};

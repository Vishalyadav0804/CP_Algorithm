class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        vector<int> v;
        if(m==0){
            return v;
        }
        int n=matrix[0].size();
        int count=0,total_elements=m*n;
        int row=0,col=0,i;
        if(m==0 && n==0){
            return v;
        }
        while(row<m && col<n){
            if(count==total_elements){
                break;
            }
            for(i=col;i<n;i++){
                v.push_back(matrix[row][i]);
                count++;
            }row++;
            if(count==total_elements){
                break;
            }
            for(i=row;i<m;i++){
                v.push_back(matrix[i][n-1]);
                count++;
            }n--;
            if(count==total_elements){
                break;
            }
            for(i=n-1;i>=col;i--){
                v.push_back(matrix[m-1][i]);
                count++;
            }m--;
            if(count==total_elements){
                break;
            }
            for(i=m-1;i>=row;i--){
                v.push_back(matrix[i][col]);
                count++;
            }col++;
            if(count==total_elements){
                break;
            }
        }
        return v;
    }
};

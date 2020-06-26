class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        //vector<vector<int>> vec;
        vector<vector<int>> v(n, vector<int>(n, 0));
        if(n==0){
            return v;        
        }
        //int v[n][n];
        int count=0,total_elements=n*n,row=0,col=0,l=n,r=n,i,z=1,j;
        while(row<l && col<r){
            if(count==total_elements){
                break;
            }
            for(i=col;i<r;i++){
                //v.push_back(matrix[row][i]);
                v[row][i]=z;
                z++;
                count++;
            }row++;
            if(count==total_elements){
                break;
            }
            for(i=row;i<l;i++){
                //v.push_back(matrix[i][n-1]);
                v[i][r-1]=z;
                z++;
                count++;
            }r--;
            if(count==total_elements){
                break;
            }
            for(i=r-1;i>=col;i--){
                //v.push_back(matrix[m-1][i]);
                v[l-1][i]=z;
                z++;
                count++;
            }l--;
            if(count==total_elements){
                break;
            }
            for(i=l-1;i>=row;i--){
                //v.push_back(matrix[i][col]);
                v[i][col]=z;
                z++;
                count++;
            }col++;
            if(count==total_elements){
                break;
            }
        }
        // for(i=0;i<n;i++){
        //     for(j=0;j<n;j++){
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return v;
    }
    
};

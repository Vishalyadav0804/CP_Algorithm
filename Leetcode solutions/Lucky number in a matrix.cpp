class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();  // dimensions 
        int m=matrix[0].size();
        for(int i=0;i<n;i++){  // for each row
            int mini=100005;  
            int index=-1;
            for(int j=0;j<m;j++){
                if(matrix[i][j]<mini){
                    mini=matrix[i][j];
                    index=j;
                }
            }
            int maxi=-1;
            for(int j=0;j<n;j++){   // for the column finding the maximum
                if(matrix[j][index]>maxi)
                    maxi=matrix[j][index];
            }
            if(maxi==mini)
                ans.push_back(maxi);  // push the lucky number in the final array
        }
        return ans;  // returning the final array
    }
};

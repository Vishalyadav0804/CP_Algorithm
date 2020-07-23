class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        if(A.size()==0 || B.size()==0) return 0;
		int n=A.size();
		int res=0;
		int temp=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				temp=0;
				for(int k=i;k<n;k++){
					for(int v=j;v<n;v++){
						if(A[k-i][v-j]==1 && B[k][v]==1){
							temp++;
						}
					}
				}
				res=max(res,temp);
			}
			}

		for(int i=0;i<n;i++){

			for(int j=0;j<n;j++){
				 temp=0;
				for(int k=i;k<n;k++){
					for(int v=j;v<n;v++){
						if(B[k-i][v-j]==1 && A[k][v]==1){
							temp++;
						}
					}
				}
				res=max(res,temp);
			}

		}    
		return res;
    }
};

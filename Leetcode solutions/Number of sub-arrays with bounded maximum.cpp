class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
        int j=0,count=0,res=0;
        for(int i=0;i<A.size();i++){
            if(A[i]>=L && A[i]<=R){
                res+=i-j+1;count=i-j+1;
            }
            else if(A[i]<L){
                res+=count;
            }
            else{
                j=i+1;
                count=0;
            }
        }
        return res;
    }
};

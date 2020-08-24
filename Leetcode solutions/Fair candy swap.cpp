class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector <int> ans;
        int aSum,bSum;
        aSum = bSum = 0;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        aSum = accumulate(A.begin(),A.end(),0);
        bSum = accumulate(B.begin(),B.end(),0);
        int target = (aSum-bSum)/2;
        for(int i=0;i<A.size();i++)
        {
               // here apply binary search on B
            int left = 0;
            int right = B.size()-1;
            while(left<=right)
            {
                int mid = (left+right)/2;    
                if(B[mid]==A[i]-target)
                {
                    ans.push_back(A[i]);
                    ans.push_back(B[mid]);
                    return ans;
                }else if(A[i]-target<B[mid]){
                    right = mid -1;
                }else{
                    left = mid+1;
                }
            }
        }        
        return ans;    
    }
};

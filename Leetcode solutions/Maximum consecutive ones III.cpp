class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int l=0,r=0,z=0,ans=0;
        while(r<A.size())
        {
            if(A[r]==0)z++;
            while(z>k)
            {
                if(A[l++]==0)z--;
            }
            ans=max(r-l+1,ans);
            r++;
        }
        return ans;
    }
};

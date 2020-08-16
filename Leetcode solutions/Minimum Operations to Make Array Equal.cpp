class Solution {
public:
    int minOperations(int n) {
        if(n==1) return 0;
        int res=0;
        for(int i=0;i<n/2;i++){
            int val=(2*i)+1;
            res=res+n-val;
        }
        return res;
    }
};

class Solution {
public:
    int integerBreak(int n) {
        if(n<4) return n-1;
        int ans=0;
        if(n%3==0) ans=pow(3,n/3);
        else if(n%3==1) ans=4*pow(3,n/3-1);
        else ans=2*pow(3,n/3);
        return ans;
    }
};

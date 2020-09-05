class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int signDividend=1,signDivisor=1;
        long ans=0;
        if(dividend<0) signDividend=-1;
        if(divisor<0) signDivisor=-1;
        int sign=signDividend*signDivisor;
        long dvd=labs(dividend);
        long dvs=labs(divisor);
        while(dvd>=dvs){
            long temp=dvs,m=1;
            while(temp << 1 <= dvd){
                temp <<= 1;
                m <<= 1;
            }
            dvd-=temp;
            ans+=m;
        }
        return sign*ans;
    }
};

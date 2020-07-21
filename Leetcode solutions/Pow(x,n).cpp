class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        if(n==-1) return 1/x;
        double power = myPow(x, n/2);
        if(n % 2 == 0)
            return power * power;
        else {
            return power * power * (n < 0 ? (1 / x) : x);
        }
    }
};

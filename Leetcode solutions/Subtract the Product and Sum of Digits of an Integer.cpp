class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0;
        while(n>0){
            int rem=n%10;
            n=n/10;
            pro*=rem;
            sum+=rem;
        }
        return pro-sum;
    }
};

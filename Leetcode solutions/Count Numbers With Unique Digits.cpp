class Solution {
public:
    int permutation(int x,int r){
        if(r==0) return 1;
        return x*permutation(x-1,r-1);
    }
    int countNumbersWithUniqueDigits(int n) {
        int sum=1;
        for(int i=0;i<n;i++){
            sum+=9*permutation(9,i);
        }
        return sum;
    }
};

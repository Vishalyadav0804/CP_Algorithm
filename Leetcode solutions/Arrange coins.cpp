class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0) return 0;
        int i=1;
        while(n-i>i){
            n=n-i;
            i++;
        }
        return i;
    }
};

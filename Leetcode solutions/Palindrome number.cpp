class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        for(int i=x;i>0;i=i/10){
            long long int p=i%10;
            rev=rev*10+p;
        }
        if(x==rev)
            return true;
        return false;
    }
};

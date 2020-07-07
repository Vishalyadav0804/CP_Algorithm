class Solution {
public:
    bool isPerfectSquare(int num) {
        double p=sqrt(num);
        int q=sqrt(num);
        if(p==q)
            return true;
        return false;
    }
};

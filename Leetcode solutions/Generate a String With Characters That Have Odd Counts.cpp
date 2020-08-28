class Solution {
public:
    string generateTheString(int n) {
        string res = "";
        if (n%2 == 0){
            res += 'b';
            n-=1;
        }
        for (int i=0;i < n;i++)
            res += 'a';
        return res;
    }
};

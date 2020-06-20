class Solution {
public:
    string reverseStr(string s, int k) {
        int i,n=s.size();
        for(i=0;i<n;i+=2*k)
            reverse(s.begin()+i,s.begin()+min(k+i,n));
        return s;
    }
};

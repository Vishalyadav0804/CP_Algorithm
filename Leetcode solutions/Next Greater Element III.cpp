class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        next_permutation(s.begin(),s.end());
        auto res=stoll(s);
        if(res<=n || res>INT_MAX) return -1;
        return res;
    }
};

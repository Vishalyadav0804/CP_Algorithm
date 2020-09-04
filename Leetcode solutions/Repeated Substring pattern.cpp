class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str=s+s;
        str.erase(str.begin()+0);
        str.erase(str.begin()+str.size()-1);
        if(str.find(s)!=-1) return true;
        return false;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,z=0;
        unordered_set<char> set;
        while(j<s.size()){
            if(set.find(s[j])==set.end()){
                set.insert(s[j]);
                j++;
                z=max(j-i,z);
            }
            else{
                set.erase(s[i]);
                i++;
            }
        }
        return z;
    }
};

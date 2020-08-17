class Solution {
public:
    
    int longestPalindrome(string s) {
        unordered_map<char, int> hash;
        int n=s.length();
        
        for(int i=0; i<n; i++)
        {
            hash[s[i]]++;
        }
        int flag=0;
        int pal=0;
        for(auto i=hash.begin(); i!=hash.end(); i++)
        {
            if(i->second%2==0)
                pal+=i->second;
            else
            {
                flag=1;
                pal+=(i->second - 1);
            }
        }
        pal+=flag;
        return pal;
    }
};

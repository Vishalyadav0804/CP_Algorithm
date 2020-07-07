class Solution {
public:
    bool checkpalindrome(vector<char> v){
    int i=0;
    int j=v.size()-1;
    while(j>i){
    if(toupper(v[i++])!=toupper(v[j--]))
    return false;
    }
    return true;
    }

    bool isPalindrome(string s) {
        vector<char> v;
        int i=0;
        int sz=s.length();

        while(i!=sz){
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&& s[i]<='Z')||(s[i]>='0'&& s[i]<='9'))
           v.push_back(s[i]);

            i++;
           }

        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        bool ans=checkpalindrome(v);
          return ans;
    }
};

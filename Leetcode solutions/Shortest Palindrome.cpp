// https://www.youtube.com/watch?v=c4akpqTwE5g
class Solution {
public:
    string shortestPalindrome(string s) {
        string rev="";
        for(int i=s.size()-1;i>=0;i--){
            rev+=s[i];
        }
        string l=s+"#"+rev;
        vector<int> p(l.size());
        for(int i=1;i<l.size();i++){
            int j=p[i-1];
            while(j>0 && l[i]!=l[j]){
                j=p[j-1];
            }
            if(l[i]==l[j]){
                p[i]=j+1;
            }
        }
        string temp="";
        int len=s.size()-p[l.size()-1];
        for(int i=0;i<len;i++){
            temp+=rev[i];
        }
        return temp+s;
    }
};

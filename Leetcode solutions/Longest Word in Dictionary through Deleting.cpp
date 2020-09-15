class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string res="";
        for(auto& w: d){
            if(w.length()<res.length() || (w.length()==res.length() && w>res))
                continue;
            for(int i=0, j=0; i<w.length() && j<s.length(); i++, j++){
                while(j<s.length() && s[j]!=w[i]) 
                    j++;
                if(i==w.length()-1 && j<s.length()) 
                    res = w;
            }
        }
        return res;
    }
};

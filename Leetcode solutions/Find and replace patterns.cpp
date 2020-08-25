class Solution {
public:
    string fun(string w){
        unordered_map<char,int> m;
        for(char x:w){
            if(!m.count(x))
                m[x]=m.size();
        }
        for(int i=0;i<w.size();i++){
            w[i]='a'+m[w[i]];
        }
        return w;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for(string word:words){
            if(fun(word)==fun(pattern)){
                res.push_back(word);
            }
        }
        return res;
    }
};

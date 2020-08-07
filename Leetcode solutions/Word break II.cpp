class Solution {
public:
    vector<string> break_word(string &s,int n,int max_len,unordered_set<string> &dist,unordered_map<int,vector<string>> &mp){
        if(mp.count(n)) return mp[n];
        string str;
        for(int i=n;i<s.size() && str.size()<max_len;i++){
            str+=s[i];
            if(dist.count(str)){
                if(i==s.size()-1){
                    mp[n].push_back(str);
                }
                else{
                    vector<string> vs=break_word(s,i+1,max_len,dist,mp);
                    for(auto x:vs){
                        mp[n].push_back(str+ " "+x);
                    }
                }
            }
        }
        return mp[n];
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dist;
        unordered_map<int,vector<string>> mp;
        int max_len=0;
        for(auto x:wordDict){
            dist.insert(x);
            max_len=max(max_len,(int)x.size());
        }
        return break_word(s,0,max_len,dist,mp);
    }
}; 

class Solution {
public:
    bool isPred(string &a,string &b){
        int b_size = b.size(), a_size = a.size();
        if (b_size - a_size != 1) return false;
        for (int i = 0; i < b_size; ++i) {
            string sub = b.substr(0, i) + b.substr(i+1, b_size-i-1);
            if (sub == a) return true;
        }
        return false;
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        if (!n) return 0;
        sort(words.begin(), words.end(), 
             [](const string& a, const string& b) {
                 return a.size() < b.size();
             });
        int res = 1;
        vector<int> dp(n, 1);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (isPred(words[j], words[i])) {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            res = max(res, dp[i]);
        }
        
        return res;
    }
};

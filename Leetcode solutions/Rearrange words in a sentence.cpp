class Solution {
public:
    string arrangeWords(string text) {
        text[0] = tolower(text[0]);
        stringstream ss{text};
        string token;
        int maxLen(0);
        while(getline(ss, token, ' ')) {
            maxLen = max(maxLen, (int)token.size());
        }
        vector<vector<string>> arr(maxLen + 1);
        stringstream ss1{text};
        while(getline(ss1, token, ' ')) {
            arr[token.size()].push_back(token);
        }
        string ans;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i].size()) {
                for(int j = 0; j < arr[i].size(); j++) {
                    ans += arr[i][j];
                    ans += ' ';
                }
            }
        }
        ans.pop_back();
        ans[0] = toupper(ans[0]);
        return ans;
    }
};

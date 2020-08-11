class Solution {
public:
    int minInsertions(string s) {
        int count = 0, n = s.length();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') st.push(s[i]);
            else {
                if (i + 1 < n && s[i] == s[i + 1]) {
                    i++;
                    if (!st.empty()) st.pop();
                    else count++;
                } else {
                    count++;
                    if (!st.empty()) st.pop();
                    else count++;
                }
            }
        }
        
        while (!st.empty()) {
            count += 2;
            st.pop();
        }
        
        return count;
    }
};

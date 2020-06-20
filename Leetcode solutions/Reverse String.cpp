class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stack;
        for(int i=0;i<s.size();i++){
            stack.push(s[i]);
        }
        for(int i=0;i<s.size();i++){
            s[i]=stack.top();
            stack.pop();
        }
    }
};

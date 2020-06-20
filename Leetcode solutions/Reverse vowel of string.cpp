class Solution {
public:
    string reverseVowels(string s) {
        stack<char> stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                stack.push(s[i]);
            }
        }
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                str+=stack.top();
                stack.pop();
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};

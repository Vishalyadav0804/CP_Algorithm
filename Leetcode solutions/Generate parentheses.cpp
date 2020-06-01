class Solution {
public:
    void backtrack(vector<string> &v,string str,int open,int close,int n){
        if(open==n && close==n){
            v.push_back(str);
        }
        if(open<n){
            backtrack(v,str+'(',open+1,close,n);
        }
        if(close<open){
            backtrack(v,str+')',open,close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        backtrack(v,"",0,0,n);
        return v;
    }
};

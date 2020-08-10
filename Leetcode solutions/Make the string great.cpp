class Solution {
public:
    string makeGood(string s) {
        if(s.size()<=1) return s;
        stack<int> temp;
        for(int i=0;i<s.size();i++){
            if(temp.empty() || ((s[i]+32!=temp.top()) && (s[i]-32!=temp.top()))){
                temp.push(s[i]);
            }
            else{
                temp.pop();
            }
        }
        string res="";
        while(!temp.empty()){
            res+=temp.top();
            temp.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.size()){
            return "0";
        }
        stack<char> s;
        for(int i=0;i<num.size();i++){
            if(s.empty()){
                s.push(num[i]);
            }
            else{
                while(!s.empty() && s.top()>num[i] && k>0){
                    s.pop();
                    k--;
                }
                s.push(num[i]);
            }
        }
        while(k>0){
            s.pop();
            k--;
        }
        if(s.empty()){
            return "0";
        }
        string str;
        while(!s.empty()){
            str=s.top()+str;
            s.pop();
        }
        while(str[0]=='0'){
            str.erase(str.begin());
        }
        if(str.size()==0){
            return "0";
        }
        return str;
    }
};
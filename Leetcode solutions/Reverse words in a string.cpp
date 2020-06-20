class Solution {
public:
    string reverseWords(string s) {
        stack<string> temp;
        for(int i=0;i<s.size();i++){
            string word="";
            if(s[i]==' '){
                continue;
            }
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            temp.push(word);
        }
        string res="";
        while(!temp.empty()){
            res+=temp.top();
            temp.pop();
            if(!temp.empty()){
                res+=" ";
            }
        }
        return res;
    }
};

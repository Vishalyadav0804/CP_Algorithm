class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==0){
            return 0;
        }
        int k=0;
        stack<string> temp;
        for(int i=0;i<s.size();i++){
            string word="";
            if(s[i]==' '){
                continue;
            }
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
                k++;
            }
            temp.push(word);
        }
        if(k==0){
            return 0;
        }
        string top=temp.top();
        return top.size();
    }
};

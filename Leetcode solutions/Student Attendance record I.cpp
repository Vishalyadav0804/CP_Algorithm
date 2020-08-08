class Solution {
public:
    bool checkRecord(string s) {
        if(s.size()==0 || s.size()==1){
            return true;
        }
        int count=0;
        if(s.size()<3){
            for(int i=0;i<2;i++){
                if(s[i]=='A'){
                    count++;
                }
            }
            if(count>1)
                return false;
            return true;
        }
        for(int i=0;i<s.size()-2;i++){
            if(s[i]=='A'){
                count++;
                if(count>1){
                    return false;
                }
            }
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
        }
        if(s[s.size()-1]=='A' && s[s.size()-2]=='A'){
            return false;
        }
        return true;
    }
};

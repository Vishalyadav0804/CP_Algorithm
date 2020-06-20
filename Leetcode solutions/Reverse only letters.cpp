class Solution {
public:
    string reverseOnlyLetters(string S) {
        if(S.size()==0){
            return S;
        }
        vector<char> v;
        for(int i=0;i<S.size();i++){
            if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z')){
                v.push_back(S[i]);    
            }
        }
        reverse(v.begin(),v.end());
        string str="";
        int j=0;
        for(int i=0;i<S.size();i++){
            if((S[i]>='a' && S[i]<='z') || (S[i]>='A' && S[i]<='Z')){
                str+=v[j];
                j++;
            }else{
                str+=S[i];
            }
        }
        return str;
    }
};

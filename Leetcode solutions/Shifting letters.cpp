class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]=(shifts[i]+shifts[i+1])%26;
        }
        for(int i=0;i<S.size();i++){
            int idx=S[i]-'a';
            idx=(idx+shifts[i])%26;
            S[i]=char(97+idx);
        }
        return S;
    }
};

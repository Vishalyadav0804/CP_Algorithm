class Solution {
public:
    void letterCombinations(vector<string> &result,string &digits,string current,int index,vector<string> &mapping){
        if(index==digits.length()){
            result.push_back(current);
            return;
        }
        string letters=mapping[digits[index]-'0'];
        for(int i=0;i<letters.length();i++){
            letterCombinations(result,digits,current+letters[i],index+1,mapping);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.length()==0){
            return result;
        }
        vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        letterCombinations(result,digits,"",0,mapping);
        return result;
    }
};

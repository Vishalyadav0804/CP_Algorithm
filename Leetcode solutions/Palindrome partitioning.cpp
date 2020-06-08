class Solution {
public:
    bool isPalindrome(string &s,int start,int end){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    void generateDecompo(string s,int idx,vector<vector<string>> &result,vector<string> &list){
        if(idx==s.size()){
            result.push_back(list);
        }
        for(int i=idx;i<s.length();i++){
            if(isPalindrome(s,idx,i)){
                list.push_back(s.substr(idx,i-idx+1));
                generateDecompo(s,i+1,result,list);
                list.pop_back();
            }
        }    
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> list;
        generateDecompo(s,0,result,list);
        return result;
    }
};

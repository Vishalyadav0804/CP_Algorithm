class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string temp=s;
        for(int i=0;i<s.size();i++){
            int pos=indices[i];
            temp[pos]=s[i];
        }
        s=temp;
        return s;
    }
};

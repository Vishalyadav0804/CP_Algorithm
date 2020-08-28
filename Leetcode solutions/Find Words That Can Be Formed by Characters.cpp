class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(26,0);
        int ans=0;
        for(int i=0;i<chars.size();i++){
            int idx=chars[i]-'a';
            count[idx]++;
        }
        for(int i=0;i<words.size();i++){
            string s=words[i];
            vector<int> temp=count;
            int z=0;
            for(int j=0;j<s.size();j++){
                int idx=s[j]-'a';
                if(temp[idx]){
                    temp[idx]--;
                    z++;
                }else{
                    break;
                }
            }
            if(z==s.size()) ans+=z;
        }
        return ans;
    }
};

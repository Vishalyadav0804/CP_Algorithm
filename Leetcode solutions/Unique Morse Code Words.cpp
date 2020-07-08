class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        if(words.size()==0){
            return 0;
        }
        string str[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string s[words.size()];
        string res[words.size()];
        for(int i=0;i<words.size();i++){
            string abc=words[i];
            //cout<<abc<<" ";
            string xyz="";
            for(int j=0;j<abc.size();j++){
                int idx=abc[j]-'a';
                //cout<<idx<<" ";
                xyz=xyz+str[idx];
            }
            res[i]=xyz;
        }
        set<string> st;
        for(int i=0;i<words.size();i++){
            //cout<<res[i]<<" ";
            st.insert(res[i]);
        }
        int count=0;
        for(auto x:st){
            //cout<<x<<" ";
            count++;
        }
        return count;
    }
};

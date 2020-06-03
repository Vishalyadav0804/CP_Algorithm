class Solution {
public:
    bool compare(pair<string,int> m1, pair<string,int> m2){
        return m1.second < m2.second;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(int i=0;i<paragraph.size();i++){
            if(paragraph[i]==','|| paragraph[i]=='.'||paragraph[i]=='!' || paragraph[i]=='?'|| paragraph[i]==';' || paragraph[i]=='\''){
                paragraph[i]=' ';
            }
            else if(paragraph[i]>='A' && paragraph[i]<='Z'){
                paragraph[i]=tolower(paragraph[i]);
            }
        }
        istringstream v(paragraph);
        string word;
        unordered_map<string,int> dict;
        while(v>>word){
            dict[word]++;
        }
        for(int i=0;i<banned.size();i++){
            dict.erase(banned[i]);
        }
        int maxvalue=INT_MIN;
        string str="";
        for(auto x=dict.begin();x!=dict.end();x++){
            if(x->second > maxvalue){
                maxvalue=x->second;
                str=x->first;
            }
        }
        return str;
    }
};

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int m=sentence.size();
        int n=searchWord.size();
        int j=0,k=0;
        vector <string> tokens; 
        stringstream check1(sentence); 
        string intermediate; 
        while(getline(check1, intermediate, ' ')) 
        { 
            tokens.push_back(intermediate); 
        } 
        int count=0;
        for(int i=0;i<tokens.size();i++){
            string s1=tokens[i];
            while(s1[k]==searchWord[j]){
                count++;
                if(count==n){
                    return i+1;
                }
                k++;
                j++;
            }
            count=0;
            k=0;
            j=0;
        }
        return -1;
    }
};

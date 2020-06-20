class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0){
            return s;
        }
        vector <string> tokens; 
        stringstream check1(s); 
        string intermediate; 
        while(getline(check1, intermediate, ' ')) 
        { 
            tokens.push_back(intermediate); 
        } 
        string p;
        string str="";
        int k=1;
        for(int i=0;i<tokens.size();i++){
            p=tokens[i];
            reverse(p.begin(),p.end());
            for(int j=0;j<p.size();j++){
                str+=p[j];
            }
            if(k!=tokens.size()){
                str+=' ';    
            }
            k++;
        }
        return str;
    }
};

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        int z=0,i;
        for(string email:emails){
            string str="";
            for(i=0;i<email.size();i++){
                if(email[i]=='+' || email[i]=='@'){
                    break;
                }
                else if(email[i]=='.') continue;
                str+=email[i];
            }
            for(int j=i;j<email.size();j++){
                if(email[j]=='+')
                    while(email[j]!='@') j++;
                str+=email[j];
            }
            cout<<str<<endl;
            if(s.find(str)==s.end()){
                z++;
                s.insert(str);
            }
        }
        return z;
    }
};

bool isdigit(char ch){
    return (ch>='0' && ch<='9')?true:false;
}
class Solution {
public:
    string validIPAddress(string IP) {
        transform(IP.begin(), IP.end(), IP.begin(), ::tolower);
        int i4=0,i6=0;
        for(auto s:IP){
            if(s=='.'){
                i4=1;
                break;
            }
            if(s==':'){
                i6=1;
                break;
            }
        }
        if(i4){
            if(IP[IP.size()-1]=='.'){
                return "Neither";
            }
            int c=0;
            vector <string> tokens;  
            stringstream check1(IP); 
            string intermediate; 
            while(getline(check1, intermediate, '.')) 
                tokens.push_back(intermediate); 
            for(auto tmp:tokens){
                if(tmp.size()==0){
                return "Neither";
                }
                if(tmp[0]=='-'){
                    return "Neither";
                }
                if(tmp.size()>1 && tmp[0]=='0'){
                    return "Neither";
                }
                if(tmp.size()>3){
                    return "Neither";
                }
                for(auto ch:tmp){
                    if(!isdigit(ch)){
                        return "Neither";
                    }
                }
                if(stoi(tmp)<0 or stoi(tmp)>255){
                    return "Neither";
                }
                c++;
            }
            if(c==4){
                return "IPv4";
            }
        }
        if(i6){
            if(IP[IP.size()-1]==':'){
                return "Neither";
            }
            int c=0;
            vector <string> tokens;  
            stringstream check1(IP); 
            string intermediate; 
            while(getline(check1, intermediate, ':')) 
                tokens.push_back(intermediate);
            for(auto tmp:tokens){
                if(tmp.size()==0){
                    return "Neither";
                }
                if(tmp[0]=='-'){
                    return "Neither";
                }
                if(tmp[0]=='0' && tmp.size()>4){
                    return "Neither";
                }
                if(tmp.size()>4){
                    return "Neither";
                }
                for(auto ch:tmp){
                    if(!isdigit(ch)){
                        if(ch>'f')
                            return "Neither";
                    }
                }
                c++;
            }
            if(c==8){
                return "IPv6";
            }
        }
        return "Neither";
    }
};

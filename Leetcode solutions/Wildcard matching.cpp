class Solution {
public:
    bool match(int i,int j,string &s,string &p,vector<vector<char>> &mem){
        int sn=s.size();
        if(j==p.size()) return i==sn;
        if(mem[i][j]!=-1) return mem[i][j];
        if(i<sn && (p[j]=='?' || p[j]==s[i])) return mem[i][j]=match(i+1,j+1,s,p,mem);
        if(p[j]=='*') return mem[i][j]=match(i,j+1,s,p,mem) ||(i<sn && match(i+1,j,s,p,mem));
        return 0;
    }
    bool isMatch(string s, string p) {
        vector<vector<char>> mem(s.size()+1,vector<char>(p.size(),-1));
        return match(0,0,s,p,mem);
    }
};
/*
bool isMatch(string s, string p) {
        return isMatch(0,0,s,p);    
    }
    bool isMatch(int i, int j, string& s, string& p) {
        int sn = s.size();
        if(j==p.size()) return i==sn;
        if(p[j]=='*') return isMatch(i,j+1,s,p) || (i<sn && isMatch(i+1,j,s,p));
        if(i<sn && (p[j]=='?'|| s[i]==p[j])) return isMatch(i+1,j+1,s,p);
        return 0;
    }
*/

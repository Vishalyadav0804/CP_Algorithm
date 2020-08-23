class Solution {
public:
    string thousandSeparator(int n) {
        string s="";
        s=to_string(n);
        if(s.size()<=3) return s;
        string res="";
        int z=0;
        for(int i=s.size()-1;i>=0;i--){
            z++;
            res+=s[i];
            if(z==3){
                res+='.';
                z=0;
            }
        }
        reverse(res.begin(),res.end());
        if(res[0]=='.'){
            res.erase(res.begin()+0);
        }
        return res;
    }
};

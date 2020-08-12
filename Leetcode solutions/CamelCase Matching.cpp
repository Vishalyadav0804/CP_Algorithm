class Solution {
public:
    bool match(string q,string p){
        int i=0,j=0;
        while(i<q.size()){
            if(j<p.size() && q[i]==p[j]){
                i++;
                j++;
            }
            else{
                if(q[i]>='A' && q[i]<='Z'){
                    if(j==p.size()) return false;
                    return false;
                }
                i++;
            }
        }
        if(j==p.size()) return true;
        return false;
    }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> res;
        for(int i=0;i<queries.size();i++){
            res.push_back(match(queries[i],pattern));
        }
        return res;
    }
};

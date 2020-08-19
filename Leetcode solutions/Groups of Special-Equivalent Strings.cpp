class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string>mp;
        for(int i=0;i<A.size();i++)
        {
        string o="";
        string e="";
            for(int j=0;j<A[i].size();j++)
            {
                if(j%2==0)
                    e+=A[i][j];
                else
                    o+=A[i][j];
            }
            sort(o.begin(),o.end());
            sort(e.begin(),e.end());
            mp.insert(e+o);
        }
        return mp.size();
    }
};

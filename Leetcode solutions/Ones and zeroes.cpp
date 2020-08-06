class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> mem(m+1,vector<int>(n+1));
        for(string &s:strs) { 
            int z=count(s.begin(),s.end(),'0');
            for(int i=m;i>=z;i--) 
                for(int j=n;j>=(int)s.size()-z;j--) 
                    mem[i][j] = max(mem[i][j], 1+mem[i-z][j-s.size()+z]);
        }
        return mem[m][n];
    }
};

/*
int findMaxForm(vector<string>& strs, int m, int n) {
        int sz = strs.size();
        vector<pair<int,int>> ct(sz);
        for(int i=0;i<sz;i++) {
            int sn = strs[i].size(), z=0;
            for(char c:strs[i]) if(c=='0') z++;
            ct[i]=pair<int,int>(z,sn-z);
        }
        return dfs(0,m,n,ct);
    }
    int dfs(int p, int m, int n, vector<pair<int,int>>& ct) {
        if(m<0 || n<0) return -1;
        if(p==ct.size()) return 0; 
        return max(dfs(p+1,m,n,ct), 1+dfs(p+1,m-ct[p].first,n-ct[p].second,ct));
    }
*/

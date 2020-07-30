class Solution {
public:
    vector<int> parent;
    int find(int x){
        return parent[x] == x ? x : find(parent[x]);
    }
    bool equationsPossible(vector<string>& equations) {
        for(int i=0;i<26;i++){
            parent.push_back(i);
        }
        for(int i=0;i<equations.size();i++){
            if(equations[i][1]=='='){
                int a=equations[i][0]-'a';
                int b=equations[i][3]-'a';
                int x=find(a);
                int y=find(b);
                if(x!=y)
                    parent[y]=x;
            }
        }
        for(int i=0;i<equations.size();i++){
            if(equations[i][1]=='!'){
                int a=equations[i][0]-'a';
                int b=equations[i][3]-'a';
                int x=find(a);
                int y=find(b);
                if(x==y)
                    return false;
            }
        }
        return true;
    }
};

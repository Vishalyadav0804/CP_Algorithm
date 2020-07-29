class Solution {
public:
    int find(int x,vector<int> &parent)
    {
        return parent[x]==x?x:find(parent[x],parent);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
 		vector<int> groups(n);
        for(int i=0;i<n;i++)
            groups[i]=i;
        int extraedges=0;
        for(auto &x:connections)
        {
            int group1=find(x[0],groups);
            int group2=find(x[1],groups);
            if(group1!=group2)
            {
                groups[group2]=group1;
            }
            else extraedges++;
        }
        int components=0;
        for(int i=0;i<n;i++)if(groups[i]==i)components++;
        return (extraedges>=components-1)?components-1:-1;
    }
};

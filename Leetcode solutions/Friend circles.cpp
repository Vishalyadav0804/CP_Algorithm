class Solution {
public:
    vector<int>parent;
 	int find(int x) {
 		return parent[x] == x ? x : find(parent[x]);
 	}
    int findCircleNum(vector<vector<int>>& edges) {
        int n = edges.size();
        int count=n,x,y;
 		parent.resize(n+1, 0);
 		for (int i = 0; i <= n; i++)
 			parent[i] = i;
 		for (int i = 0; i < n; i++) {
            for(int j=i+1;j<n;j++){
                if(edges[i][j]==1){
                    x = find(i);
 			        y = find(j); 
                    if (x != y){
                        parent[y] = x;
                        count--;
                    }
                }
            }
 		}

 		return count;
    }
};

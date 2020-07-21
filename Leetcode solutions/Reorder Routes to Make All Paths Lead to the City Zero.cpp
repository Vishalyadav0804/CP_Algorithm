class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        int answer=0;
        vector<vector<int>> G(n);
        //set<vector<int>> set1;  
        unordered_set<int> set1;
        vector<bool> possible(n,false);
        for(auto i:connections){
                G[i[0]].push_back(i[1]);
                G[i[1]].push_back(i[0]);
                //set1.insert(i);     
                set1.insert(i[0]<<16 | i[1]); 
        }
        queue<int> q{{0}};
        while(!q.empty()){
            int cur=q.front();  q.pop();
            if(!possible[cur]){
                possible[cur]=true;
                for(auto i:G[cur]){
                //if(set1.find({cur,i})!=set1.end()&&!possible[i]){
                if(set1.count(cur << 16 | i) && !possible[i]){
                    answer++;
                    q.push(i);
                    continue;
                }
                q.push(i);
               } 
            } 
        }
        return answer;
    }
};

class Solution {
public:
    void dfs(int N,int K,int cur,int idx,int prev,vector<int> &res){
        if(idx==N-1){
            res.push_back(cur);
            return;
        }
        int next=prev+K;
        if(next<10){
            dfs(N,K,(cur*10)+next,idx+1,next,res);
        }
        next=prev-K;
        if(K!=0 && next>=0){
            dfs(N,K,(cur*10)+next,idx+1,next,res);
        }
    }
    vector<int> numsSameConsecDiff(int N, int K) {
        if(N==1){
            vector<int> v={0,1,2,3,4,5,6,7,8,9};
            return v;
        }
        vector<int> res;
        for(int i=1;i<=9;i++){
            dfs(N,K,i,0,i,res);
        }
        return res;
    }
};
//https://www.youtube.com/watch?v=GNjv8rHaOMQ

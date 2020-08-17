class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        priority_queue<int> q;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<m;i++){
            q.push(mat[0][i]);
        }
        for(int i=1;i<n;i++){
            priority_queue<int> pque;
            while(!q.empty()){
                int top=q.top();
                q.pop();
                for(int j=0;j<m;j++){
                    int sum=top+mat[i][j];
                    if(pque.size()<k) pque.push(sum);
                    else{
                        if(pque.top()>sum){
                            pque.pop();
                            pque.push(sum);
                        }
                    }
                }
            }
            q=pque;
        }
        return q.top();
    }
};

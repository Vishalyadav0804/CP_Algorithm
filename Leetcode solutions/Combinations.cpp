class Solution {
public:
    void helper(int start,int n,int k,vector<int> &list,vector<vector<int>> &result){
        if(k==0){
            result.push_back(list);
            return;
        }
        for(int i=start;i<=n;i++){
            list.push_back(i);
            helper(i+1,n,k-1,list,result);
            list.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        if(n<=0||k<=0||k>n){
            return result;
        }
        vector<int> list;
        helper(1,n,k,list,result);
        return result;
    }
};

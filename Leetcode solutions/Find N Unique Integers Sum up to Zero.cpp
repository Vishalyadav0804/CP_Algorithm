class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<n-1;i++){
            ans.push_back(i);
            sum=sum+i;
        }
        int rem=0-sum;
        ans.push_back(rem);
        return ans;
    }
};

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        map<int,int> dp;
        for(int i=0;i<arr.size();i++){
            if(dp.find(arr[i]-d)==dp.end()){
                dp[arr[i]]=1;
            }
            else{
                dp[arr[i]]=1+dp[arr[i]-d];
            }
        }
        int ma=INT_MIN;
        for(auto d:dp){
            ma=max(ma,d.second);
        }
        return ma;
    }
};

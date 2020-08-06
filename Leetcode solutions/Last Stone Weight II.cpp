class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum = 0;
        for (int i = 0; i < stones.size(); i++) {
            sum += stones[i];
        }
        bool dp[31][3100];
        for (int i = 0; i < stones.size(); i++) {
            dp[i][0] = true;
        }
        for (int i = 1; i < sum/2; i++) {
            dp[0][i] = false;
        }
        
        for (int i = 1; i < stones.size()+1; i++) {
            for (int j = 1; j <= sum/2; j++) {
                dp[i][j] = dp[i-1][j];
                if (stones[i-1] <= j) {
                    dp[i][j] |= dp[i-1][j-stones[i-1]];
                }
            }
        }
        
        
        int ans = 0;
        for (int j = sum/2; j >=0; j--) {
            if (dp[stones.size()][j]) {
                ans = (sum - 2*j);
                return ans;
            }
        }
        return ans;
    }
};

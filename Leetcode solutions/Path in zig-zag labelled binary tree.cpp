class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int low = log2 (label);
        vector<int> ans (low+1);
        int cur = 0;
        ans[0] = 1;
        ans[low] = label;
        for (int i = low - 1; i > 0; i--) {
            cur = (pow(2, low+1) - ans[i+1] + pow(2, low) - 1)/2;
            ans[i] = cur;
            low--;
        }
        return ans;
    }
};

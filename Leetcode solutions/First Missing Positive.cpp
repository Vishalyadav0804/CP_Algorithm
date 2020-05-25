class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(), i;
        vector<bool> _nums(n);
        for (auto x: nums) if (x <= n && x > 0) _nums[x-1] = true;
        for (i = 0; i < n && _nums[i]; ++i);
        return i+1;
    }
};

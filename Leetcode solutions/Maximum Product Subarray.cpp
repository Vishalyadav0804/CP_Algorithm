class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()) {
        return 0;
    }
    int currentMax = nums[0];
    int currentMin = nums[0];
    int maxProduct = nums[0];
    
    for(size_t i = 1; i < nums.size(); ++i) {
        int p1 = currentMax * nums[i];
        int p2 = currentMin * nums[i];
        currentMax = max(nums[i], max(p1, p2));
        currentMin = min(nums[i], min(p1, p2));
        if(currentMax > maxProduct) 
            maxProduct=currentMax;
    }
    return maxProduct;
    }
};

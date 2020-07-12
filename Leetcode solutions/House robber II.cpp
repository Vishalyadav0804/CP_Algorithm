class Solution {
public:
    int robOriginal(vector<int> nums){
        int x = 0, y = 0;
        for (int i=0;i<nums.size();++i) {
            if(i%2==0){
               x=max(x+nums[i], y);
            }else {
                y=max(y+nums[i],x);
            }
        }
        return max(x,y);
    }
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return nums[0];
        
        vector<int> numsA(nums.begin() + 1, nums.end());
        vector<int> numsB(nums.begin(), nums.end()-1);
        
        return max(robOriginal(numsA), robOriginal(numsB));
    }
};

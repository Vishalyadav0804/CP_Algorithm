class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i = 0; i <= nums.size() - 3; i++) {
            for(int j = i + 1; j <= nums.size() - 2; j++) {
                for(int k = j + 1; k <= nums.size() - 1 && nums[i] + nums[j] > nums[k]; k++) {
                    count++;
                }
            }
        }
        return count;
    }
};

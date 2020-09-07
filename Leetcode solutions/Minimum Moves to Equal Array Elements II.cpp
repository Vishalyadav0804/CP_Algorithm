class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int median=nums[(nums.size()-1)/2];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=abs(nums[i]-median);
        }
        return sum;
    }
};

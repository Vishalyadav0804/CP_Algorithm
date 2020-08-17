class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int minjumps=0;
        for(int i=size-2;i>=0;i--){
            minjumps++;
            if(nums[i]>=minjumps) minjumps=0;
        }
        return minjumps==0;
    }
};

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0, r=0, n=nums.size(), zeroes=0, ones=0, res=0;
        while(r<n){
            while(zeroes<2 and r<n)
                nums[r++]==1 ? ones++ : zeroes++;
            res=max(res,ones);
            while(zeroes==2)
                nums[l++]==1 ? ones-- : zeroes--;
        }
        return zeroes ? res : res-1;
    }
};

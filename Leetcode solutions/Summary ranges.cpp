class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret;
        for (int i=0; i<nums.size(); i++) {
            int pre = nums[i];
            while (i+1<nums.size() && nums[i+1]==nums[i]+1)  
                i++;
            if (pre == nums[i])
                ret.push_back(to_string(pre));
            else
                ret.push_back(to_string(pre)+"->"+to_string(nums[i]));
        }
        return ret;
    }
};

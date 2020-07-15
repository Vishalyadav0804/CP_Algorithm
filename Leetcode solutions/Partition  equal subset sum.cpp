class Solution {
public:
    bool canPartition(vector<int>& nums, int index, int sum, int total, unordered_map<string, bool>& mp){
        string state = to_string(index)+to_string(sum);
        
        if(mp.find(state)!=mp.end())
            return mp[state];
        if(sum*2==total)
            return true;
        if(sum>total/2 || index>=nums.size())
            return false;
        bool foundPartition = canPartition(nums,index+1,sum+nums[index], total,mp)||canPartition(nums, index+1, sum, total, mp);
        mp[state] = foundPartition;
        
        return foundPartition;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto num:nums){
            sum+=num;
        }
        if(sum%2!=0)
            return false;
        unordered_map<string, bool> mp;
        return canPartition(nums, 0, 0, sum, mp);
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_set<int> set(nums.begin(), nums.end());
        int ret = 1;
        for(auto &n: nums)
        {
            if(!set.count(n)) continue;
            set.erase(n);
            int pre=n-1, next=n+1;
            while(set.count(pre)) set.erase(pre--);
            while(set.count(next)) set.erase(next++);
            ret = max(ret, next-pre-1);
        }
        return ret;
    }
};

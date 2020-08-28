class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr(nums);
        sort(arr.begin(),arr.end());
        unordered_map<int,int> m;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(m.find(arr[i])==m.end())
                m[arr[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            res.push_back(m[nums[i]]);
        }
        return res;
    }
};

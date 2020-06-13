class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        if(nums.size()<4) return result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    int sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum==target){
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[left]);
                        ans.push_back(nums[right]);
                        result.push_back(ans);
                        ans.clear();
                        
                        int leftval=nums[left];
                        while(left<nums.size() && nums[left]==leftval)
                            left++;
                        int rightval=nums[right];
                        while(right>left && nums[right]==rightval)
                            right--;
                    }
                    else if(sum<target)
                        left++;
                    else
                        right--;
                }
                while(j+1<nums.size() && nums[j+1]==nums[j]){
                    j++;
                }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i])
                i++;
        }
        return result;
    }
};

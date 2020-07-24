class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum=accumulate(nums.begin(), nums.end(), 0);
        if(S>sum || (S+sum)%2!=0)
            return 0;
        int targetSum=(S+sum)/2;
        vector<int> sumRecord(sum+1, 0);
        sumRecord[0]=1;
        for (int i=0;i<nums.size();i++){
            for (int j=sum-nums[i];j>=0;j--){
                sumRecord[j+nums[i]] += sumRecord[j];
            }
        }
        return sumRecord[targetSum];
    }
};

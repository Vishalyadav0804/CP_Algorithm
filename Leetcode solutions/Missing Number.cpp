class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        result=((nums.size())*(nums.size()+1))/2;
        return result-sum;
    }
};

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int z=0;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            if(s.size()%2==0) z++;
        }
        return z;
    }
};

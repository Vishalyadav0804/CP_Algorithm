class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i=0;
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        while(i<nums.size()-2){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int z=nums[i]+nums[left]+nums[right];
                if(abs(z-target)<abs(sum-target))
                    sum=z;
                if(z>target) right--;
                else if(z<target) left++;
                else return sum;
            }
            i++;
        }
        return sum;
    }
};

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return -1;
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=(i+j)/2;
            if(nums[mid]<nums[j])
                j=mid;
            else
                i=mid+1;
        }
        return nums[i];
    }
};

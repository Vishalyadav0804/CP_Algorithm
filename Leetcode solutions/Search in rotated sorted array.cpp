class Solution {
public:
    int binarysearch(vector<int> &nums,int l,int r,int target){
        if(l>r)
            return -1;
        int mid=(l+r)/2;
        if(nums[mid]==target)
            return mid;
        if(nums[l]<=nums[mid]){
            if(target>=nums[l] && target<=nums[mid]){
                return binarysearch(nums,l,mid-1,target);
            }
            else
                return binarysearch(nums,mid+1,r,target);
        }
        if(target>=nums[mid] && target<=nums[r])
            return binarysearch(nums,mid+1,r,target);
        return binarysearch(nums,l,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int res=binarysearch(nums,0,n-1,target);
        return res;
    }
};

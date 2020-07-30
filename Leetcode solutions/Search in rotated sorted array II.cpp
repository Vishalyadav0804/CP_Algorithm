class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;        
        while(l <= r){  
            int mid = l + (r - l) / 2;            
            if(nums[mid] == target) return true;
            if(nums[mid] > nums[r]){
                if(target > nums[mid] || target <= nums[r]) l = mid + 1;    
                else r = mid - 1;                                                               
            }else if(nums[mid] == nums[r]){
                r --;
            }
            else{
                if(target <= nums[r] && target > nums[mid]) l = mid + 1; 
                else r = mid - 1;                                                               
            }
        }
        return false;   
    }
};

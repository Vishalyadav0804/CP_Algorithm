class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0 ;
        for(int i=0 ; i<k ; i++){
            sum += nums[i] ;
        }
        double maxm = sum ;
        int n = nums.size() ;
        for(int i=k ; i<n ; i++){
            sum = sum + nums[i] - nums[i-k] ;
            maxm = max(maxm,sum) ;
        }
        return maxm/k ;
    }
};

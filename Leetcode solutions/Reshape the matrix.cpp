class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m=nums.size();
        int n = nums[0].size();
        if(m*n!=r*c)
            return nums;
        
        vector<int> all;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                all.push_back(nums[i][j]);
            }
        }
        
        vector<vector<int>> res;
        int k=0;
        
        while(r--){
            vector<int> sub;
            int t=c;
            while(t--){
                sub.push_back(all[k]);
                k++;
            }
            res.push_back(sub);
        }
        return res;
    }
};

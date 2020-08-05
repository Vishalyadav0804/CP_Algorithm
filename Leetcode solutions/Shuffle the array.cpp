class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> no;
        for(int i=0; i<n;i++){
               no.push_back(nums[i]);
               no.push_back(nums[n+i]);
           }
        return no;
    }
};

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        int i=0;
        while(2*i+1 < nums.size()){
            int a=nums[2*i],b=nums[2*i+1];
            while(a--) result.push_back(b);
            i++;
        }
        return result;
    }
};

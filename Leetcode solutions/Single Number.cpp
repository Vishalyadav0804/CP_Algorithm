class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>::iterator itr;
        int ans=0;
        for(itr=nums.begin();itr!=nums.end();itr++)
        {
            ans=ans^(*itr);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pf=1,n=nums.size(),pb=1;
        vector<int> v;
       
        
        for(int i=0;i<n;i++)
        {   v.push_back(pf);
            pf=pf*nums[i];
        }        
        
        for(int i=n-1;i>=0;i--)
        {
            v[i]*=pb;
            pb*=nums[i];
        }
        return v;
    }
};

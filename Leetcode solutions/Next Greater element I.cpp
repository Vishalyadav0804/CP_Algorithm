class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int j;
        vector<int> ans(n,-1);
        if(n==0||m==0)
            return ans;
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++)
            mp[nums2[i]]=i;
        for(int i=0;i<n;i++)
        {
            j=mp[nums1[i]];
            for(j=j+1;j<m;j++)
                if(nums2[j]>nums1[i])
                {
                    ans[i]=nums2[j];
                    break;
                }
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n=nums1.size();
        int m=nums2.size();
        if(n==0 || m==0){
            return v;
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int p1=0,p2=0;
        while(p1<n && p2<m){
            if(nums1[p1]==nums2[p2]){
                v.push_back(nums1[p1]);
                p1++;
                p2++;
                continue;
            }
            if(nums1[p1]<nums2[p2]){
                while(p1<n && nums1[p1]<nums2[p2]){
                    p1++;
                }
            }
            else{
                while(p2<m && nums2[p2]<nums1[p1]){
                    p2++;
                }
            }
        }
        return v;
    }
};

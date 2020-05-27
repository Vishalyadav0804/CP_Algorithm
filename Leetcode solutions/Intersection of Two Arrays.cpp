class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        if(n==0 || m==0){
            return ans;
        }
        set<int> s1;
        set<int> s2;
        int i,j;

        for(int i = 0; i < n; i++) {
            s1.insert(nums1[i]);
        }
        for(int i = 0; i < m; i++) {
            s2.insert(nums2[i]);
        }
        vector<int> c;
        for(auto x:s1){
            c.push_back(x);
        }
        for(auto x:s2){
            c.push_back(x);
        }
        sort(c.begin(),c.end());
        for(i=0;i<c.size()-1;i++){
            if(c[i]==c[i+1]){
                ans.push_back(c[i]);
                i++;
            }
        }
        return ans;
    }
};
//  auto it1 = s1.begin();
//     while(it1 != s1.end()) {
//         if(s2.count(*it1) > 0) {
//             ans.push_back(*it1);
//         }
//         it1++;
//     }
    

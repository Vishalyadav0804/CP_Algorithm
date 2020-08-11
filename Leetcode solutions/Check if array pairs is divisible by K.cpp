class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int ele:arr){
            mp[((ele%k)+k)%k]++;
        }
        if((mp[0]%2)==1) return false;
        
        for(int i=1;i<k;i++){
            if(mp[i]!=mp[k-i]) return false;
        }
        return true;
    }
};

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            if(x.second>arr.size()/4) return x.first;
        }
        return -1;
    }
};

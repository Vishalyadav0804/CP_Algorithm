class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        int prev=-1;
        for(auto x:m){
            if(x.first==x.second) 
                if(prev<x.first){
                    prev=x.first;
                }
        }
        return prev;
    }
};

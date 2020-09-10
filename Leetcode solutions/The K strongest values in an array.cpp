class Solution {
public:
    bool static comp(pair<int,int> a,pair<int,int> b){
        return (a.first > b.first) || (a.first==b.first && a.second>b.second);;
    }
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<pair<int,int>> v;
        vector<int> res;
        sort(arr.begin(),arr.end());
        int median=arr[(arr.size()-1)/2];
        for(int i=0;i<arr.size();i++){
            v.push_back(make_pair(abs(arr[i]-median),arr[i]));
        }
        sort(v.begin(),v.end(),comp);
        for(int i=0;i<k;i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};

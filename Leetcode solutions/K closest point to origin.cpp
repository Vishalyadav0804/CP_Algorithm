class Solution {
public:
    // bool compare(pair<vector<int>,int> &a,pair<vector<int>,int> &b){
    //     return a.second < b.second;
    // }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int m=points.size();
        vector<vector<int>> v;
        if(m==0){
            return v;
        }
        vector<pair<vector<int>,int>> p;
        for(int i=0;i<m;i++){
            int sqrt=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            p.push_back(make_pair(points[i],sqrt));
        }
        //sort(p.begin(),p.end(),compare);
        partial_sort(p.begin(), p.begin()+K, p.end(), [](auto& a, auto& b){return                         a.second < b.second;});
        for(int i=0;i<K;i++){
            v.push_back(p[i].first);
            //cout<<p[i].second<<" ";
        }
        return v;
    }
};

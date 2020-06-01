class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1){
            return intervals;
        }
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        vector<int> current_interval=intervals[0];
        for(int x=1;x<intervals.size();x++){
            if(intervals[x][0]<=current_interval[1]){
                current_interval[1]=max(intervals[x][1],current_interval[1]);
            }else{
                v.push_back(current_interval);
                current_interval=intervals[x];
            }
        }
        v.push_back(current_interval);
        return v;
    }
};

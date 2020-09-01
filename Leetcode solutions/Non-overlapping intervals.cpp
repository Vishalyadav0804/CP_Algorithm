class Solution {
public:
    bool static comp(vector<int> &a,vector<int> &b) {
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return 0;
        int count=-1;
        sort(intervals.begin(),intervals.end(),comp);
        vector<int> prev=intervals[0];
        for(vector<int> a:intervals){
            if(prev[1]>a[0]){
                count++;
            }else{
                prev=a;
            }
        }
        return count;
    }
};

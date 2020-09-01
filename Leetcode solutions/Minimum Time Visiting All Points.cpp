class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int z=0;
        for(int i=1;i<points.size();i++){
            vector<int> v1=points[i-1];
            vector<int> v2=points[i];
            int sub1=abs(v1[0]-v2[0]);
            int sub2=abs(v1[1]-v2[1]);
            z+=max(sub1,sub2);
        }
        return z;
    }
};

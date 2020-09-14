class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> sol;
        if(!size(intervals) and !size(newInterval)){
            sol.push_back(newInterval);
            return sol;
        }
        if(!size(intervals)){
            sol.push_back(newInterval);
            return(sol);
        }
        int i=0;
        int start=newInterval[0];
        int end=newInterval[1];
		//while #1 put all intervals that are to the left of the inserted interval. 
                while(i<size(intervals) and  intervals[i][1]<newInterval[0]) 
                    sol.push_back(intervals[i++]);
		//while #2 merge all intervals that intersect with the inserted interval.
                while(i<size(intervals) and intervals[i][0]<=end){
                    start = min(start, intervals[i][0]);
                    end = max(end, intervals[i][1]);
                    i++;
                }
                sol.push_back({start,end});
	//while #3 put all intervals that are to the right of the inserted interval.
            while(i<size(intervals))
                sol.push_back(intervals[i++]);
        return sol;
    }
};

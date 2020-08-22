class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) {
            int temp = start;
            start = destination;
            destination = temp;;
        }
        int res = 0, total = 0;
        for (int i = 0; i < distance.size(); i++) {
            if (i >= start && i < destination) {
                res += distance[i];
            }
            total += distance[i];
        }
        return min(res, total - res);
    }
};

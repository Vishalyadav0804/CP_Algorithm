class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> V;
        int n = arr.size(), min = INT_MAX;
        for (int i = 1; i < n; i++) {
            int diff = arr[i] - arr[i - 1];
            if (min == diff) {
                V.push_back({arr[i - 1], arr[i]});
            } else if (min > diff) {
                V.clear();
                min = diff;
                V.push_back({arr[i - 1], arr[i]});
            }
        }
        return V;
    }
};

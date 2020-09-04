class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> arrSet(arr.begin(), arr.end());
        unordered_map<int, int> pos;
        int position = 1;
        for (auto num : arrSet){
            pos[num] = position;
            position++;
        }
        for (auto& num : arr){
            num = pos[num];
        }
        return arr;
    }
};

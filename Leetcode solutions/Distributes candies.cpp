class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> mp;
        for(int i : candies) mp.insert(i);
        return min(candies.size()/2, mp.size());
    }
};

class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k != 0) return false;
        multiset<int> s(nums.cbegin(), nums.cend());
        while(!s.empty()) {
            int a = *s.begin();
            for (int i = a; i < a + k; ++i) {
                if (auto it = s.find(i); it == s.end())
                    return false;
                else s.erase(it);
            }
        }
        return true;
    }
};

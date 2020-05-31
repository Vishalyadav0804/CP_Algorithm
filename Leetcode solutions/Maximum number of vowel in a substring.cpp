class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int left = 0; int count = 0; int res = 0;
        for(int right = 0; right < n; ++right) {
            while (right - left + 1 > k) {
                if (isVowel(s[left])) count--;
                left++;
            }
            if (isVowel(s[right])) count++;
            res = max(res, count);
        }
        return res;
    }
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o';
    }
};

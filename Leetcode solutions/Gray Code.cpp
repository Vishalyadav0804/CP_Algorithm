class Solution {
public:
     vector<int> grayCode(int n) {
        vector<int> vec{0};
        for(int i = 0; i < n; ++i){
            int tmp = 1 << i;
            for(int j = vec.size() - 1; j >= 0; --j){
                vec.push_back(vec[j] + tmp);
            }
        }
        return vec;
    }
};

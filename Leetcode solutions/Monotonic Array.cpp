class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increase = false;
        bool decrease = false;
        for(int i = 0; i < A.size() - 1; i++) {
            if(A[i] > A[i+1]) increase = true;
            if(A[i] < A[i+1]) decrease = true;
            if(increase == true && decrease == true) return false;
        }
        return true;
    }
};

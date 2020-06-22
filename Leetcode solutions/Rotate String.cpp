class Solution {
public:
    bool rotateString(string A, string B) {
        if(A == B) return true;
    
        const auto dim = A.size();

        for(size_t i = 0; i < dim; i++)
        {
            std::rotate(A.begin(), A.begin() + 1, A.end());

            if(A == B) return true;
        }

        return false;
    }
};

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> freq;
        int n = arr1.size();
        vector<int> res;
            
        for (int i = 0; i < n; i++){
            freq[arr1[i]] +=1;
        }
        for (int i = 0; i < arr2.size(); i++){
            while (freq[arr2[i]] != 0){
                res.push_back(arr2[i]);
                freq[arr2[i]] -=1;
            }
        }
        for (auto it:freq){
            while (it.second != 0){
                res.push_back(it.first);
                it.second = it.second - 1;
            }
        }
        return res;
    }
};

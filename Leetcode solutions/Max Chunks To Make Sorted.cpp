class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxx = INT_MIN;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++){
            maxx = max(maxx,arr[i]);
            if(i == maxx){
                ans++;
            }   
        }
        
        return ans;
    }
};

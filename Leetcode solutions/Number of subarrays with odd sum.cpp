class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        vector<long long int>count{0,0};
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=(sum+arr[i])%2;
            if(sum==1){
                count[1]++;
            }
            else{
                count[0]++;
            }
        }
        return count[1]+(count[0]*count[1])%1000000007;
    }
};

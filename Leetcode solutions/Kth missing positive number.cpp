class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr[arr.size()-1];
        int z=0;
        vector<bool> a(n,false);
        for(int i=0;i<arr.size();i++){
            int j=arr[i];
            a[j]=true;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==false){
                z++;
            }
            if(z==k){
                return i;
            }
        }
        return n+k-z;
    }
};

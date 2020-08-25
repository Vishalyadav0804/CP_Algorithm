class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> v={1,1};
        int f=1,s=1;
        while(f+s<=k){
            v.push_back(f+s);
            f=s;
            s=v.back();
        }
        //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        int ans=0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<=k){
                ans++;
                k-=v[i];
            }
            if(k==0) return ans;
        }
        return ans;
    }
};
//https://www.youtube.com/watch?v=w3zD7kyJE8U

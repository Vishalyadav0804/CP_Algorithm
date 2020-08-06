class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        vector<int> cnt(n, 1);
        int lis[n]; 
        lis[0]=1;    
        for (int i=1;i<n;i++){ 
            lis[i]=1; 
            for (int j=0;j<i;j++)   
                if (nums[i]>nums[j] && lis[i]<lis[j]+1){
                    lis[i]=lis[j]+1;
                    cnt[i] = cnt[j];
                }  
                else if (lis[i] == lis[j]+1) {
                    cnt[i] += cnt[j];
                }
        } 
        int res=0,ans=0;
        for(int i=0;i<n;i++){
            res=max(res,lis[i]);
        }
        for(int i=0;i<n;i++){
            if(res==lis[i])
                ans+=cnt[i];
        }
        return ans;
    }
};

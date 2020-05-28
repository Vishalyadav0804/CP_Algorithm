class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        if(weights.empty()) return 0;
        int low=0,high=0;
        
        for(int i=0;i<weights.size();i++)
        {
            low=max(low,weights[i]);
            high+=weights[i];
        }
        int ans=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int cnt=1,workload=0;
            
            for(int i=0;i<weights.size();i++)
            {
                workload+=weights[i];
                if(workload>mid)
                {
                    workload=weights[i];
                    cnt++;
                }
            }
            
            if(cnt<=D) {ans=mid; high=mid-1;}
            else low=mid+1;
        }
        
        return ans;
    }
};

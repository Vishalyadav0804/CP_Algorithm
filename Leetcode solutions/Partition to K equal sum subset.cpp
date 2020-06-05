class Solution {
public:
    bitset<10001> used;
    bool partition(int idx,vector<int> &nums,int k,int bucketsum,int targetsum){
        if(k==1) return true;
        if(bucketsum > targetsum) return false;
        if(bucketsum==targetsum)
            return partition(0,nums,k-1,0,targetsum);
        for(int i=idx;i<nums.size();i++){
            if(!used[i]){
                used[i]=true;
                if(partition(i+1,nums,k,bucketsum+nums[i],targetsum)){
                    return true;
                }
                used[i]=false;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int n=nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        if(k==0 || sum%k!=0) return false;
        return partition(0,nums,k,0,sum/k);
    }
};

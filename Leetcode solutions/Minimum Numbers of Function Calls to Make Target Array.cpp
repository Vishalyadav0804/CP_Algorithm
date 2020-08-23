class Solution {
public:
    int minOperations(vector<int>& nums) {
        int z=0;
        bool temp=true;
        while(temp){
            int k=0,zero=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%2!=0){
                    nums[i]=nums[i]-1;
                    z++;
                }
                else if(nums[i]%2==0){
                    k++;
                }
            }
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    zero++;
                }
            }
            if(zero==nums.size()){
                return z;
            }
            if(k==nums.size()){
                z++;
                for(int i=0;i<nums.size();i++){
                    nums[i]=nums[i]/2;
                }
            }
        }
        return z;
        
    }
};

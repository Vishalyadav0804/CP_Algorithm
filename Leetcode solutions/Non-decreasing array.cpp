class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int i=0,idx=-1;
        bool flg=false;
        while(i<n-1){
            if(nums[i]>nums[i+1]){
                idx=i;
                flg=true;
                break;
            }
            i++;
        }
        if(flg)
        {
            vector<int> tmp1=nums;
            vector<int> tmp2=nums;
            tmp1[idx] = tmp1[idx+1];
            tmp2[idx+1] = tmp2[idx];
            return is_sorted(tmp1.begin(), tmp1.end()) || is_sorted(tmp2.begin(), tmp2.end());
        }

        return is_sorted(nums.begin(), nums.end());
    }
};

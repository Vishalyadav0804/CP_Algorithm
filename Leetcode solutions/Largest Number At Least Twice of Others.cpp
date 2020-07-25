class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int maxElem=INT_MIN,maxElemPos,secondMax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(maxElem<nums[i]){
                maxElem=max(maxElem,nums[i]);
                maxElemPos=i;
            }
        }
        nums.erase(nums.begin()+maxElemPos);
        for(int i=0;i<nums.size();i++){
            secondMax=max(secondMax,nums[i]);
        }
        if(maxElem>=2*secondMax) return maxElemPos;
        return -1;
    }
};

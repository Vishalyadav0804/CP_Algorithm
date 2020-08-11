class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        set<int> s;
        int sum=0,count=0;
        s.insert(0);
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(s.find(sum-target)!=s.end()){
                count++;
                s.clear();
                s.insert(0);
                sum=0;
            }else{
                s.insert(sum);
            }
        }
        return count;
    }
};

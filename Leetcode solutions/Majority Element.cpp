class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        int majority=0,max=0;
        for(auto x:map){
            if(x.second>=max){
                max=x.second;
                majority=x.first;
            }
        }
        return majority;
    }
};

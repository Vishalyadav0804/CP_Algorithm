class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int Xor=0;
        for(int i=0;i<nums.size();i++){
            Xor=Xor^nums[i];
        }
        int mask=1;
        while(true){
            if((mask & Xor) == 0){
                mask = mask << 1;
            }else{
                break;
            }
        }
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if((mask & nums[i]) == 0){
                a=a^nums[i];
            }else{
                b=b^nums[i];
            }
        }
        return { a, b };
    }
};

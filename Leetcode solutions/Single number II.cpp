class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0;
        int len=nums.size();
        //vector<int>::iterator itr;
        for(int i=0; i<32; i++)
        {
            int mask = (1 << i);
            int count = 0;
            for(int j=0; j<len; j++)
                if(mask&nums[j]) count++;
            if(count%3)
                res |= (1<<i);
        }
        return res;
    }
};

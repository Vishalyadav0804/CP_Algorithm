class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        int diff=0;
        for(int i=stones.size()-1;i>0;i--){
            int j=i-1;
            diff=abs(stones[i]-stones[j]);
            stones[j]=diff;
            sort(stones.begin(),stones.end());
        }
        return stones[0];
    }
};

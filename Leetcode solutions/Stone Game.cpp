class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int sum1=0,sum2=0;
        sort(piles.begin(),piles.end());
        if(piles.size()%2==0){
            for(int i=piles.size()-1;i>=0;i-=2){
                sum1+=piles[i];
                sum2+=piles[i-1];
            }
        }
        if(sum1>sum2) return true;
        return false;
    }
};

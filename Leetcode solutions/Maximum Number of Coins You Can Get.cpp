class Solution {
public:
    int maxCoins(vector<int>& piles) {
         if(piles.size()==0){
            return 0;
        }
        sort(piles.begin(),piles.end());
        int count=0;
        int temp=piles.size()/3;
        
        int ans=0;
        for(int i=piles.size()-2;i>=0;i=i-2){
            if(count==temp){
                break;
            }
            ans+=piles[i];
            count++;
        }
        return ans;
    }
};

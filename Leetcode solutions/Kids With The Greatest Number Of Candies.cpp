class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        if(candies.size()==0){
            return v;
        }
        int maxVal=candies[0];
        for(int i=1;i<candies.size();i++){
            if(maxVal<candies[i]){
                maxVal=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=maxVal){
                v.push_back(true);
            }else{
                v.push_back(false);
            }
        }
        return v;
    }
};

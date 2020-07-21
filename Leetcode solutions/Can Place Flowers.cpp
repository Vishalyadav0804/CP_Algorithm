class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int plantFlowers = 0;
        int sz = flowerbed.size();
        for(int i=0;i<sz;i++){
            if(flowerbed[i] == 0){
                if(i-1 >= 0 && flowerbed[i-1] == 1){
                    continue;
                }
                if(i+1 < sz && flowerbed[i+1] == 1){
                    continue;
                }
                plantFlowers++;
                flowerbed[i] = 1;
            }
            if(plantFlowers >= n)   return true;
        }
        return false;
    }
};

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> arr(num_people,0);
        int z=1,i=0;
        while(candies>=z){
            i=i%num_people;
            arr[i]+=z;
            candies=candies-z;
            z++;
            i++;
        }
        i=i%num_people;
        arr[i]+=candies;
        return arr;
    }
};

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int remBottles;
        int total=numBottles;
        while(numBottles>=numExchange){
            remBottles=numBottles%numExchange;
            numBottles=numBottles/numExchange;
            total+=numBottles;
            numBottles+=remBottles;
        }
        return total;
    }
};

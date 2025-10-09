class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = 0, empty = 0;
        while (numBottles > 0 || empty >= numExchange) {
            if (empty >= numExchange) {
                numBottles++;
                empty = empty % numExchange;
            }
            sum += numBottles;
            empty = empty + numBottles % numExchange;
            numBottles /= numExchange;
        }
        return sum;
    }
};
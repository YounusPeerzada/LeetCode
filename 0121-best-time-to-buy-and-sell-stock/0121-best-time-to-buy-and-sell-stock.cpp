class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int bestBuy = prices[0];
        int size = prices.size();

        for (int i = 1; i < size; i++) {
            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            } else {
                bestBuy = min(bestBuy, prices[i]);
            }
        }

        return maxProfit;
    }
};
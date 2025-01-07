class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        int profit = 0;

        for(int i=0; i<prices.size(); i++){
            minPrice = min(prices[i], minPrice);
            profit =  prices[i] - minPrice;
            maxProfit = max(profit, maxProfit);
        }

        return maxProfit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            int cost = prices[i]-minimum;
            minimum = min(prices[i],minimum);
            profit = max(profit,cost);
        }
        return profit;
    }
};
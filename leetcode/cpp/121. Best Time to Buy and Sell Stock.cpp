class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;

        int maxProfit = 0;
        int curMin = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            curMin = min(curMin, prices[i]);
            maxProfit = max(maxProfit, prices[i] - curMin);
        }
        return maxProfit;
    }
};
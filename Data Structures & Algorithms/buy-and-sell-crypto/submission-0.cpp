class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int max_p = 0;
        for (int i = 1; i < n; i++) {
            int curr_p = 0;
            if (prices[i] <= min) {
                min = prices[i];
                continue;
            } else {
                curr_p = prices[i] - min;
                max_p = max(max_p, curr_p);
            }

        }
        return max_p;
    }
};

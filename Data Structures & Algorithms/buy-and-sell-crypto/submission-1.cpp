class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0;
        int l = 0;
        int r = 1;
        while (r < prices.size()){
            if (prices[l] > prices[r]) l = r;
            else prof = max(prof, prices[r] - prices[l]);
            r++;
        }

        return prof;
    }
};

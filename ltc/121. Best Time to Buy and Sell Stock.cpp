class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int ans = 0;
        int n = prices.size();
        while(r < n)
        {
            if(prices[l] < prices[r])
            {
                ans = max(ans, prices[r] - prices[l]);
                r++;
                continue;
            }
            else l = r;
            r++;
        }

        return ans;
    }
};

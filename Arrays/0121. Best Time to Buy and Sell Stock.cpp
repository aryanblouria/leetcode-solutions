//O(n^2)
class Solution1 {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0, res = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i+1; j < prices.size(); j++)
            {
                diff = prices[j] - prices[i];
                res = max(diff, res);
            }
        }
        return res;
    }
};

//O(n)
class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0, m = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            m = min(m, prices[i]);
            res = max(res, prices[i]-m);
        }
        return res;
    }
};

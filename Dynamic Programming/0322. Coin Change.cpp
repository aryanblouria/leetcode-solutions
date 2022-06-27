//O(m*n)
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int mx = amount+1;
        vector<int> v (mx, mx);
        
        v[0] = 0;
        for (int i = 1; i <= amount; i++)
            for (int j = 0; j < coins.size(); j++)
                if (coins[j] <= i)
                    v[i] = min(v[i], v[i-coins[j]] + 1);
        return v[amount] > amount ? -1 : v[amount];
    }
};

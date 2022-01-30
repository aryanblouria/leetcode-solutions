//O(n^2)
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sum = 0, n = grid.size();
        vector<int> rows (n), cols (n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                rows[i] = max(rows[i], grid[i][j]);
                cols[j] = max(cols[j], grid[i][j]);
            }
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                sum += (min(rows[i], cols[j]) - grid[i][j]);
        return sum;
    }
};

//O(n!*n)
class Solution {
public:
    bool isSafe(int row, int col, vector<string> w, int n)
    {
        int r = row, c = col;
        while (row >= 0 && col >= 0)
        {
            if (w[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        col = c;
        row = r;
        
        while (col >= 0)
        {
            if (w[row][col] == 'Q')
                return false;
            col--;
        }
        col = c;
        
        while (row < n && col >= 0)
        {
            if (w[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    
    void nq (int col, vector<string> &w, vector<vector<string>> &v, int n)
    {
        if (col == n)
        {
            v.push_back(w);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, w, n))
            {
                w[row][col] = 'Q';
                nq(col+1, w, v, n);
                w[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> v;
        vector<string> w (n);
        
        string s (n, '.');
        for (int i = 0; i < n; i++)
            w[i] = s;
        nq(0, w, v, n);
        return v;
    }
};

//O(l*m*n)
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> v (m+1, vector<int> (n+1));
        for (string s: strs)
        {
            int z = count(begin(s), end(s), '0');
            int o = size(s) - z;
            
            for (int i = m; i >= z; i--)
                for (int j = n; j >= o; j--)
                    v[i][j] = max(v[i][j], v[i-z][j-o] + 1);    
        }
        return v[m][n];
    }
};

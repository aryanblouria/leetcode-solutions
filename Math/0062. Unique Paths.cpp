//O(min(m,n))
class Solution {
public:
    int uniquePaths(int m, int n) {
        long int res = 1;
        for (int i = m+n-2, j = 1; i >= max(m, n); i--, j++)
            res = res * i / j;
        return res;
    }
};

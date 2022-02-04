//O(n)
class Solution {
public:
    int climbStairs(int n) {
        static map<int, int> m;
        if (m.find(n) != m.end()) return m[n];
        if (n == 0) return 1;
        if (n == 1) return 1;
        m[n] = climbStairs(n-1) + climbStairs(n-2);
        return m[n];
    }
};

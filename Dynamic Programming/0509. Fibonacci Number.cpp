//O(n)
class Solution {
public:
    int fib(int n) {
        static map<int, int> m;
        if (m.find(n) != m.end()) return m[n];
        if (n <= 1) return n;
        m[n] = fib(n-1) + fib(n-2);
        return m[n];
    }
};

//O(n)
class Solution1 {
public:
    int fib(int n) {
        vector<int> v = {1, 1};
        if (n == 0) return 0;
        for (int i = 0; i < n-1; i++)
            v.push_back(v[i] + v[i+1]);
        return v[n-1];
    }
};

//O(2^n)
class Solution2 {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
};

//O(n)
class Solution3 {
public:
    int fib(int n) {
        int first = 1, second = 1, x = 0;
        if (n == 0) return 0;
        for (int i = 0; i < n-2; i++)
        {
            x = first;
            first = second;
            second += x;
        }
        return second;
    }
};

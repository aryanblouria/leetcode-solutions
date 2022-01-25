//O(n)
class Solution1 {
public:
    int climbStairs(int n) {
        int first = 1;
        int second = 1;
        for (int i = 1; i < n; i++)
        {
            int x = second + first;
            first = second;
            second = x;
        }
        return second;       
    }
};

//O(n)
class Solution2 {
public:
    int climbStairs(int n) {
        vector<int> v (n+1);
        v[0] = 1;
        v[1] = 1;
        
        for (int i = 2; i <= n; i++)
            v[i] = v[i-1] + v[i-2];
        
        return v[n];
    }
};

//O(2^n)
class Solution3 {
public:
    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        return climbStairs(n-1) + climbStairs(n-2);
    }
};

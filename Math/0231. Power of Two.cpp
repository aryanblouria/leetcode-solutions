//O(log(n))
class Solution1 {
public:
    bool isPowerOfTwo(int n) {
        if (n == 0) return 0;
        return ceil(log2(n)) == floor(log2(n));
    }
};

//O(1)
class Solution2 {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return 0;
        return (n & (n-1)) == 0;
    }
};

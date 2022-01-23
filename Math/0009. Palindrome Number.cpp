//O(log10(n))
class Solution1 {
public:
    bool isPalindrome(int x) {
        long long int r = 0, n = x, s = 0;
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;
            s = (s * 10) + r;
        }
        return (s == x);
    }
};

//O(n)
class Solution2 {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        reverse(s.begin(), s.end());
        return (s == to_string(x));
    }
};

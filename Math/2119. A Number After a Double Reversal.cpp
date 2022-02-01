//O(1)
class Solution1 {
public:
    bool isSameAfterReversals(int num) {
        if (num == 0) return true;
        return num % 10 != 0;
    }
};

//O(log10(n))
class Solution2 {
public:
    bool isSameAfterReversals(int num) {
        int n = num, rev1 = 0, rev2 = 0;
        while (n > 0)
        {
            int r = n % 10;
            rev1 = rev1 * 10 + r;
            n /= 10;
        }
        while (rev1 > 0)
        {
            int r = rev1 % 10;
            rev2 = rev2 * 10 + r;
            rev1 /= 10;
        }
        return num == rev2;
    }
};


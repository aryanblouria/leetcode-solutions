//O(log10(n))
class Solution1 {
public:
    int addDigits(int num) {
        int r = 0;
        while (num >= 10)
        {
            r = num % 10;
            num = num / 10;
            num += r;
        }
        return num;
    }
};

//O(1)
class Solution2 {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};

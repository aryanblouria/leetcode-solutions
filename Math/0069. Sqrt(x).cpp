//O(root(n))
class Solution1 {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};

//O(n)
class Solution2 {
public:
    int mySqrt(int x) {
        long long int s = 0;  
        if (x == 1 || x == 2) return 1;
        for (long long int i = 0; i < x; i++)
        {
            if (i * i > x)
            {
                s = i-1;
                break;
            }
        }
        return s;
    }
};

//O(n)
class Solution3 {
public:
    int mySqrt(int x) {
        long long int i = 1, j = x/2;
        if (x > 0 && x < 4) return 1;
        while (i < j)
        {
            if (x == i*i) return i;
            if (x == j*j) return j;
            if (x < i*i) return i - 1;
            if (x > j*j) return j;
            if (abs(x-(i*i)) > abs((x-j*j)))
                j--;
            else
                i++;
        }
        return i-1;
    }
};

//O(log(n))
class Solution4 {
public:
    int mySqrt(int x) {
        long long int i = 1, j = x;
        while (i <= j)
        {
            long long int m = (i + j)/2;
            if (m * m < x)
                i = m + 1;
            else if (m * m > x)
                j = m - 1;
            else
                return m;
        }
        return i-1;
    }
};

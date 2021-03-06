//O(n)
class Solution {
public:
    double pow(double x,int n)
    {
        if(n == 0)
            return 1;
        if (n == 1)
            return x;
        if(n % 2 == 0)
            return pow(x*x, n/2);
        return x * pow(x*x, n/2);
    }

    double myPow(double x, int n) {
        if (n < 0)
            return 1/pow(x, abs(n));
        return pow(x, n);
        }
};

//O(n)
class Solution {
public:
    double myPow(double x, int n) {
        double y = x;
        double z = 1;
        if (x == 0 || x == 1 || n == 1) return x;
        if (n == 0) return 1;
        if (n > 0) 
        {
            n--;
            while (n--)
                x *= y;
        }
        else 
        {
            while (n++)
                z /= x;
            x = z;
        }
        return x;
    }
};

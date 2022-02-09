//O(log(n))
class Solution {
public:
    int findComplement(int num) {
        int comp = 0, i = 0, b = 0;
        while (num > 0)
        {
            b = (num % 2 == 0) ? 1 : 0;
            num /= 2;
            comp += (b * pow(2, i));
            i++;
        }
        return comp;
    }
};

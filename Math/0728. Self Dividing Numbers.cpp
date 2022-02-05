//O(n*m)
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for (int i = left; i <= right; i++)
        {
            vector<int> digits;
            int count = 0, n = i;
            while (n > 0)
            {
                int r = n % 10;
                if (r == 0) 
                {
                    n = -1;
                    break;
                }
                if (i % r == 0) digits.push_back(r);
                n /= 10;
                count++;
            }
            if (n == -1) continue;
            if (count == digits.size())
                v.push_back(i);
        }
        return v;
    }
};

//O(n)
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;
        for (auto x: nums)
        {
            if (x < 0) product *= -1;
            if (x == 0) return 0;
        }
        return product;
    }
};

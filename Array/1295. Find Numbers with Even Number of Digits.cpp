//O(n)
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (auto x: nums)
        {
            if ((int)floor(log10(x)+1) % 2 == 0)
                count++;
        }
        return count;
    }
};

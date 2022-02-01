//O(nlog(n))
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low = nums[0], high = nums[nums.size()-1], gcd = 1;
        for (int i = 2; i <= low; i++)
        {
            if (low % i == 0 && high % i == 0)
                gcd = i;
        }
        return gcd;
    }
};

//O(n)
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int low = INT_MAX, high = INT_MIN, gcd = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            low = min(low, nums[i]);
            high = max(high, nums[i]);
        }
        for (int i = 2; i <= low; i++)
        {
            if (low % i == 0 && high % i == 0)
                gcd = i;
        }
        return gcd;
    }
};

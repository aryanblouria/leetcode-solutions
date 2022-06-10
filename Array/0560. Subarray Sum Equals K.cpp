//O(n^2)
class Solution1 {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ct = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum == k)
                    ct++;
            }
        }
        return ct;
    }
};

//O(n*log(n))
class Solution2 {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        int sum = 0, ct = 0;
        m[sum] = 1;
        for (auto x: nums)
        {
            sum += x;
            if (m.find(sum-k) != m.end())
                ct += m[sum-k];
            m[sum]++;
        }
        return ct;
    }
};

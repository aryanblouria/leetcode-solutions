//O(nlog(n))
class Solution1 {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        for (; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }
        return i;
    }
};

//O(n)
class Solution2 {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> v (nums.size()+1, false);
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            v[nums[i]] = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == false)
                ans = i;
        }
        return ans;
    }
};

//O(n)
class Solution3 {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n+1) / 2;
        
        for (auto x: nums)
            sum -= x;
        return sum;
    }
};

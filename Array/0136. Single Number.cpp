//O(n)
class Solution1 {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, i = 0;
        for (; i < nums.size()-1; i++)
        {
            if (nums[i+1] != nums[i])
                ans = nums[i];
            else
                i++;
        }
        if (i == nums.size()-1) ans = nums[i];
        return ans;
    }
};

//O(n)
class Solution2 {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
            ans ^= nums[i];
        return ans;
    }
};

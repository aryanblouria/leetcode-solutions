//O(n)
class Solution1 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans (2 * nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            ans[i] = nums[i];
            ans[i+nums.size()] = nums[i];
        }
        return ans;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++)
            nums.push_back(nums[i]);
        return nums;
    }
};

//O(n)
class Solution3 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        nums.resize(n * 2);
        for (int i = 0; i < n; i++)
            nums[i+n] = nums[i];
        return nums;
    }
};

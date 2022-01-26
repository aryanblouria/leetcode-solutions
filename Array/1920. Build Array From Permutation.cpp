//O(n)
class Solution1 {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans (nums.size());
        for (int i = 0; i < nums.size(); i++)
            ans[i] = nums[nums[i]];
        return ans;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> buildArray(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
            nums[i] += (nums.size() * (nums[nums[i]] % nums.size()));
        for (int i = 0; i < nums.size(); i++)
            nums[i] /= nums.size();
        return nums;
    }
};

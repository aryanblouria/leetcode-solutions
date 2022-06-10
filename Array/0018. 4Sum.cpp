//O(n^3*log(n))
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> v;
        if (nums.size() < 4) return {};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                for (int k = j + 1; k < nums.size() - 1; k++)
                {
                    int l = (long long)target - ((long long)nums[i] + (long long)nums[j] + (long long)nums[k]);
                    if (binary_search(nums.begin() + k + 1, nums.end(), l))
                    {
                        vector<int> w = {nums[i], nums[j], nums[k], l};
                        sort(w.begin(), w.end());
                        v.insert(w);
                    }
                }
            }
        }
        return vector<vector<int>> (v.begin(), v.end());
    }
};

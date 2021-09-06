class Solution {
public:
    vector<int> twoSum_bruteForce(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
            for (int j = i+1; j < nums.size(); j++)
                if (nums[i] + nums[j]==target)
                    return {i, j};
        return {};
    }

     vector<int> twoSum_twoPointers(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l = 0, h = nums.size() - 1;
        while (l < h)
        {
            if (nums[l] + nums[h] > target)
                h--;
            else if (nums[l] + nums[h] < target)
                l++;
            else
                break;
        }
        return {l, h};
    }
};



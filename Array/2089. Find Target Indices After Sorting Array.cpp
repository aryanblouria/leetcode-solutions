//O(nlog(n))
class Solution1 {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                v.push_back(i);
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int below = 0, equal = 0;
        for (auto x: nums)
        {
            if (x < target) below++;
            if (x == target) equal++;
        }
        
        vector<int> v;
        for (int i = 0; i < equal; i++)
            v.push_back(below++);
        return v;
    }
};

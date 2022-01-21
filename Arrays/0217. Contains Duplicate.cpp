//O(n^2)
class Solution1 {
public:
    bool containsDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

//O(nlog(n))
class Solution2 {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int index = 0;
        while (index < nums.size()-1)
        {
            if (nums[index+1] == nums[index])
                return true;
        }
        return false;
    }
};

//O(nlog(n))
class Solution3 {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (unique(nums.begin(), nums.end()) != nums.end())
            return true;
        return false;
    }
};

//O(n)
class Solution4 {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (auto x: nums)
            s.insert(x);
        if (s.size() == nums.size())
            return false;
        return true;
    }
};


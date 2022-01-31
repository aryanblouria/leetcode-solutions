//O(n^2)
class Solution1 {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j] && abs(i-j) <= k)
                    return true;
            }
        }
        return false;
    }
};

//O(nlog(n))
class Solution2 {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((m.find(nums[i]) != m.end()) && (i - m[nums[i]] <= k))
                return true;
            m[nums[i]] = i;
        }
        return false;
    }
};

//O(nlog(n))
class Solution3 {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (i > k) s.erase(nums[i - k - 1]);
            if (!s.insert(nums[i]).second) 
                return true;
        }
        return false;
    }
};

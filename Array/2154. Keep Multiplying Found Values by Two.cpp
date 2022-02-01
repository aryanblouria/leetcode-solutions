//O(n*m)
class Solution1 {
public:
    int findFinalValue(vector<int>& nums, int original) {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == original)
            {
                original *= 2;
                i = -1;
            }
        }
        return original;
    }
};

//O(nlog(n))
class Solution2 {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        for (auto x: nums)
            if (x == original) original *= 2;
        return original;
    }
};

//O(nlog(n))
class Solution3 {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for (auto x: nums)
            s.insert(x);
        
        while (s.count(original))
            original *= 2;
        return original;
    }
};

//O(n)
class Solution4 {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int, int> m;
        for (auto x: nums)
            m[x]++;
        
        while (original <= 1000 && m[original])
            original *= 2;
        return original;
    }
};

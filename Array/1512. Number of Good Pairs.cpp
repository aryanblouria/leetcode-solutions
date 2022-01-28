//O(n^2)
class Solution1 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    good++;
            }
        }
        return good;
    }
};

//O(n)
class Solution2 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> m;
        for (auto x: nums)
            m[x]++;
        
        int ans = 0;
        for (auto x: m)
            ans += x.second * (x.second-1)/2;
        return ans;
    }
};

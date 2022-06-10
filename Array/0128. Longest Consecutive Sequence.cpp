//O(n*log(n))
class Solution1 {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v (nums.size());
        if (nums.size() == 0) return 0;
        int count = 0, mx = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0 && nums[i] == nums[i-1]) continue;
            else if ((nums[i] == v.back() + 1) || v.empty())
            {
                count++;
                v.push_back(nums[i]);
                mx = max(mx, count);
            }
            else 
            {
                v.clear();
                v.push_back(nums[i]);
                count = 1;       
            }
        }
        return mx;
    }
};

//O(n*log(n))
class Solution2 {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (auto x: nums)
            s.insert(x);
        
        int mx = 0;
        for (auto x: s)
        {
            if (!s.count(x-1))
            {
                int e = x;
                int count = 1;
                
                while (s.count(e + 1))
                {
                    e++;
                    count++;
                }
                mx = max(mx, count);                
            }
        }
        return mx;
    }
};

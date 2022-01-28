//O(n^2)
class Solution1 {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] < nums[i])
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v (101);
        vector<int> ans;
        for (auto x: nums)
            v[x]++;
        
        for (int i = 1; i < 101; i++)
            v[i] += v[i-1];
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0) ans.push_back(0);
            else ans.push_back(v[nums[i] - 1]);
        }
        return ans;
    }
};

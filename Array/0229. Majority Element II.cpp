//O(n)
class Solution1 {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        vector<int> v;
        for (auto x: nums)
            freq[x]++;
        for (auto x: freq)
        {
            if (x.second > nums.size()/3)
                v.push_back(x.first);
        }
        return v;
    }
};

//O(nlog(n))
class Solution2 {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v;
        set<int> s;
        
        if (nums.size() < 3) 
            for (auto x: nums) s.insert(x);
        else
        {
            int count = 1, majority = nums[0];
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] == majority) count++;
                else 
                {
                    count = 1;
                    majority = nums[i];
                }
                if (count > nums.size()/3) v.push_back(nums[i]);
            }
            for (auto x: v)
                s.insert(x);
        }
        return vector<int> (s.begin(), s.end());
    }
};

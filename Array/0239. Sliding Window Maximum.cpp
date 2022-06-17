//O(n^2)
class Solution1 {
public:
    void get_max(vector<int> nums, int l, int r, vector<int> &v)
    {
        int mx = INT_MIN;
        for (int i = l; i <= r; i++)
            mx = max(mx, nums[i]);
        v.push_back(mx);
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l = 0, r = 0;
        vector<int> v;
        
        while (r < k-1)
            r++;
        while (r < nums.size())
        {
            get_max(nums, l, r, v);
            l++; r++;
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;
        vector<int> v;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (!d.empty() && d.front() == i-k)
                d.pop_front();
            while (!d.empty() && nums[d.back()] < nums[i])
                d.pop_back();
            d.push_back(i);
            if (i >= k - 1) v.push_back(nums[d.front()]);
        }
        return v;
    }
};

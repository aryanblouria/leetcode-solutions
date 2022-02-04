//O(n)
class Solution1 {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v (nums.size());
        int j = 0, k = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                v[j] = nums[i];
                j += 2;
            }    
            if (nums[i] < 0)
            {
                v[k] = nums[i];
                k += 2;
            }
        }
        return v;    
    }
};

//O(n)
class Solution2 {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> a, b;
        for (auto x: nums)
        {
            if (x > 0) a.push_back(x);
            else b.push_back(x);
        }
        
        int j = 0, k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0) nums[i] = a[j++];
            else nums[i] = b[k++];
        }
        return nums;
    }
};

//O(n)
class Solution1 {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v (nums.size());
        int i = 0, j = n, k = 0;
        
        while (k < 2 * n)
        {
            if (k % 2 == 0)
                v[k++] = nums[i++];
            else
                v[k++] = nums[j++];
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for (int i = n; i < nums.size(); i++)
            nums[i] = (nums[i] * 1024) + nums[i-n];
        
        for (int i = n, k = 0; i < nums.size(); i++, k += 2)
        {
            nums[k] = nums[i] % 1024;
            nums[k+1] = nums[i] / 1024;
        }
        return nums;
    }
};

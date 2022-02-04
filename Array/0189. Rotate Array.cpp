//O(n)
class Solution1 {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v = {};
        if (k > nums.size()) k = k % nums.size();
        for (int i = nums.size()-k; i < nums.size(); i++)
            v.push_back(nums[i]);
        for (int i = 0; i < nums.size()-k; i++)
            v.push_back(nums[i]);
        for (int i = 0; i < nums.size(); i++)
            nums[i] = v[i];
    }
};

//O(n)
class Solution2 {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v (nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            v[(i+k)%nums.size()] = nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
            nums[i] = v[i];
    }
};

//O(n)
class Solution3 {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0, j = nums.size() - 1;
        vector<int> v (nums.size());
        while (i <= j)
        {
            v[(i+k)%nums.size()] = nums[i];
            i++;
            
            v[(j+k)%nums.size()] = nums[j];
            j--;
        }
        for (int i = 0; i < nums.size(); i++)
            nums[i] = v[i];
    }
};


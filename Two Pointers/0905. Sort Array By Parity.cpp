//O(n)
class Solution1 {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v (nums.size());
        int k = 0, i = 0, j = 0;
        while (i < nums.size())
        {
            if (nums[i] % 2 == 0)
                v[k++] = nums[i];
            i++;
        }
        while (j < nums.size())
        {
            if (nums[j] % 2 != 0)
                v[k++] = nums[j];
            j++;
        }
        return v;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v (nums.size());
        int numEven = 0;
        for (auto x: nums)
            if (x % 2 == 0)
                numEven++;
        
        int i = 0, j = 0, k = numEven;
        while (i < nums.size())
        {
            if (nums[i] % 2 == 0) v[j++] = nums[i++];
            else v[k++] = nums[i++]; 
        }
        return v;
    }
};

//O(n)
class Solution3 {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v (nums.size());
        int i = 0, j = 0, k = nums.size()-1;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0) v[j++] = nums[i];
            else v[k--] = nums[i];
        }
        return v;
    }
};

//O(n)
class Solution4 {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = 0;
        while (i < nums.size())
        {
            if (nums[i] % 2 == 0)
            {
                int c = nums[i];
                nums[i] = nums[j];
                nums[j] = c;
                j++;
            }
            i++;
        }
        return nums;
    }
};

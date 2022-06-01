//O(n^2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int index = 0;
        while (index < nums.size())
        {
            int t = nums[index];
            if (t == 0)
            {
                vector<int> v = nums;
                for (int i = index; i > 0; i--)
                {
                    nums[i] = nums[i-1];
                }
                nums[0] = t;
                if (nums == v)
                {
                    index++;
                    continue;
                }
            }
            else if (t == 1)
            {
                index++;
            }
            else if (t == 2)
            {
                vector<int> w = nums;
                for (int i = index; i < nums.size()-1; i++)
                {
                    nums[i] = nums[i+1];
                }
                nums[nums.size()-1] = t;
                if (nums == w)
                {
                    index++;
                    continue;
                }
            }
        }
    }
};

//O(n)
class Solution2 {
public:
    void sortColors(vector<int>& nums) {
        int nz = 0, no = 0, nt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0) nz++;
            if (nums[i] == 1) no++;
            if (nums[i] == 2) nt++;
        }
        
        for (int i = 0; i < nz; i++)
            nums[i] = 0;
        for (int i = nz; i < nz + no; i++)
            nums[i] = 1;
        for (int i = nz + no; i < nums.size(); i++)
            nums[i] = 2;
    }
};

//O(n)
class Solution3 {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, t = nums.size()-1, i = 0;
        while (i <= t)
        {
            if (nums[i] == 0)
                swap(nums[z++], nums[i++]);
            else if (nums[i] == 1)
                i++;
            else
                swap(nums[t--], nums[i]);
        }
    }
};

//O(n^2)
class Solution1 {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, n = nums.size();
        while (n--)
        {
            if (nums[i] == 0)
            {
                int temp = nums[i];
                for (int j = i + 1; j < nums.size(); j++)
                    nums[j-1] = nums[j];
                nums[nums.size()-1] = temp;
            } 
            else 
                i++;
        }
    }
};

//O(n)
class Solution2 {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v = {};
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                v.push_back(nums[i]);
            else
                count++;
        }
        while(count--)
            v.push_back(0);
        nums = v;
    }
};

//O(n)
class Solution3 {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
                nums[index++] = nums[i];
        }
        for (int i = index; i < nums.size(); i++)
            nums[i] = 0; 
    }
};


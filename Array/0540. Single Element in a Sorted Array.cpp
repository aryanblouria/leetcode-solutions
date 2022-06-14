//O(n)
class Solution1 {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x = 0;
        for (int i = 0; i < nums.size(); i++)
            x ^= nums[i];
        return x;
    }
};

//O(log(n))
class Solution2 {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, h = nums.size()-2;
        while (l <= h)
        {
            int m = (l + h) / 2;
            if (m % 2 == 0)
            {
                if (nums[m] != nums[m+1])
                    h = m-1;
                else
                    l = m+1;
            }
            else
            {
                if (nums[m] != nums[m+1])
                    l = m+1;
                else
                    h = m-1;
            }
        }
        return nums[l];
    }
};

//O(n^2)
class Solution1 {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return nums[i];
            }
        }
        return 0;
    }
};

//O(n)
class Solution2 {
public:
    int findDuplicate(vector<int>& nums) {
        int i = nums[0], j = nums[0];
        do
        {
            i = nums[i];
            j = nums[nums[j]];
        } while (i != j);
        j = nums[0];
        while (i != j)
        {
            i = nums[i];
            j = nums[j];
        }
        return i;
    }
};

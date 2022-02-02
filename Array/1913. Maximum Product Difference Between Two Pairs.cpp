//O(nlog(n))
class Solution1 {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1] * nums[nums.size()-2] - nums[1] * nums[0];
    }
};

//O(n)
class Solution2 {
public:
    int maxProductDifference(vector<int>& nums) {
        int h1 = INT_MIN+1, h2 = INT_MIN, l1 = INT_MAX-1, l2 = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > h1)
            {
                h2 = h1;
                h1 = nums[i];
            }
            else if (nums[i] > h2)
                h2 = nums[i];
            
            if (nums[i] < l1)
            {
                l2 = l1;
                l1 = nums[i];
            }
            else if (nums[i] < l2)
                l2 = nums[i];
        }
        return h1 * h2 - l1 * l2;
    }
};

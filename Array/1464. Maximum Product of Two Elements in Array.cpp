//O(n)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int h1 = INT_MIN+1, h2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (h1 <= nums[i])
            {
                h2 = h1;
                h1 = nums[i];
            }
            if (nums[i] < h1)
                h2 = max(h2, nums[i]);
        }
        return (h1 - 1) * (h2 - 1);
        
    }
};

//O(n)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product1 = nums[0], product2 = nums[0], mx = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int x = max({nums[i], product1*nums[i], product2*nums[i]});
            int y = min({nums[i], product1*nums[i], product2*nums[i]});
            product1 = x;
            product2 = y;
            mx = max(mx, product1);
        }
        return mx;
    }
};

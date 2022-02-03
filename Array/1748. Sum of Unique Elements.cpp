//O(n)
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> unique (101, -1);
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (unique[nums[i]] == -1)
            {
                sum += nums[i];
                unique[nums[i]] = 1;
            }
            else if (unique[nums[i]] == 1)
            {
                sum -= nums[i];  
                unique[nums[i]] = 0;
            }
        }
        return sum;
    }
};

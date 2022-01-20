//O(n^2)
class Solution1 {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                m = max(sum, m);
            }
        }
        return m;
    }
};

//O(n)
class Solution2 {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            ans = max(sum, ans);
            sum = max(sum, 0);
        }
        return ans;
    }
};
 

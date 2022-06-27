//O(n*m)
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (auto x: nums)
            sum += x;
        
        if ((sum & 1) == 1) return false;
        sum /= 2;
        
        int n = nums.size();
        vector<bool> v (sum+1, false);
        v[0] = true;
        
        for (auto x: nums)
            for (int i = sum; i > 0; i--)
                if (i >= x)
                    v[i] = v[i] || v[i-x];
        return v[sum];
    }
};

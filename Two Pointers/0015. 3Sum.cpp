//O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        
        if (nums.size() < 3) return v;
        for (int i = 0; i < nums.size()-2 && nums[i] <= 0; i++)
        {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int j = i+1, k = nums.size()-1;
            
            while (j < k)
            {
                if (nums[j] + nums[k] > target)
                    k--;
                else if (nums[j] + nums[k] < target)
                    j++;
                else
                {
                    v.push_back({nums[i], nums[j], nums[k]});
                    while (j < k-1 && nums[k-1] == nums[k]) k--;
                    while (j+1 < k && nums[j+1] == nums[j]) j++;
                    k--; j++;
                }        
            }
        }      
        return v;
    }
};

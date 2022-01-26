//O(n^3)
class Solution1 {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; i++)
        {
            for (int j = i+1; j < nums.size()-1; j++)
            {
                for (int k = j+1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> x = {nums[i], nums[j], nums[k]};
                        if (find(v.begin(), v.end(), x) == v.end())
                            v.push_back(x);
                    }     
                }
            }
        }
        return v;
    }
};

//O(n^2)
class Solution2 {
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


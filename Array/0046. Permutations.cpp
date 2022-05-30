class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        permute(nums, 0, v);
        return v;
    }
    
    void permute(vector<int> &nums, int index, vector<vector<int>> &v)
    {
        if (index == nums.size())
        {
            v.push_back(nums);
            return;
        }
        
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            permute(nums, index+1, v);
            swap(nums[index], nums[i]);
        }     
    }
};

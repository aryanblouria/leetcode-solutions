//O(2^n)
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> w;
        sort(nums.begin(), nums.end());
        
        sub(v, nums, w, 0);
        return v;
    }
    
    void sub(vector<vector<int>> &v, vector<int> &nums, vector<int> &w, int k)
    {
        v.push_back(w);
        for (int i = k; i < nums.size(); i++)
        {
            if (i == k || nums[i] != nums[i-1])
            {
                w.push_back(nums[i]);
                sub(v, nums, w, i + 1);
                w.pop_back();
            }  
        }
    }
};

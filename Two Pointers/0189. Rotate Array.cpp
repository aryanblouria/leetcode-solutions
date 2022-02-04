//O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i = 0, j = nums.size() - 1;
        vector<int> v (nums.size());
        while (i <= j)
        {
            v[(i+k)%nums.size()] = nums[i];
            i++;
            
            v[(j+k)%nums.size()] = nums[j];
            j--;
        }
        for (int i = 0; i < nums.size(); i++)
            nums[i] = v[i];
    }
};

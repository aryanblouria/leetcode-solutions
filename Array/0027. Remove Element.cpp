//O(n)
class Solution1 {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = count(nums.begin(), nums.end(), val);
        int n = nums.size(), k = c;
        while (k--)
            nums.erase(find(nums.begin(), nums.end(), val));
        return n-c;
    }
};

//O(n)
class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        int ct = 0;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
                ct++;
            else
                nums[i-ct] = nums[i];
        }
        return nums.size()-ct;     
    }
};

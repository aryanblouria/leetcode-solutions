//O(n)
class Solution1 {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniques;
        for (auto x: nums)
            uniques.insert(x);
        nums = vector(uniques.begin(), uniques.end());
        return uniques.size();
    }
};

//O(n^2)
class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            while (count(nums.begin(), nums.end(), nums[i]) > 1)
                nums.erase(find(nums.begin(), nums.end(), nums[i]));
        }
        return nums.size();
    }
};

//O(n^2)
class Solution3 {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, n = nums.size(), x = INT_MAX, c = 0;
        while (i < n-1)
        {
            if (x != nums[i])
            {
                x = nums[i];
                i++;
            }
            else
            {
                for (int j = i; j < nums.size(); j++)
                    nums[j] = nums[j+1];
                c++;
            }    
        }
        return nums.size()-c;
    }
};

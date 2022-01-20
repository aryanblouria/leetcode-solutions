//O(n^2)
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};

//O(nlog(n))
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        sort(nums.begin(), nums.end());
        while (i < j)
        {
            if (nums[i] + nums[j] > target)
                j--;
            else if (nums[i] + nums[j] < target)
                i++;
            else
                return {i, j};
        }
        return {};
    }
};

//O(n)
class Solution3 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
            map.insert(pair<int, int>(nums[i], i));
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end() && map.find(target - nums[i])->second != i)
                return {i, map.find(target - nums[i])->second};
        }
        return {};
    }
};


//O(n)
class Solution {
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

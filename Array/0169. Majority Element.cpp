//O(n)
class Solution1 {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        
        for (auto x: m)
            if (x.second > (nums.size()/2))
                return x.first;
        return 0;
    }
};

//O(nlog(n))
class Solution2 {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};

//O(n)
class Solution3 {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0, majority = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (counter == 0) majority = nums[i];
            if (majority == nums[i]) counter++;
            else counter--;
        }
        return majority;
    }
};

//O(m*n)
class Solution1 {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for (int i = 1; i < nums.size(); i += 2)
        {
            for (int j = 0; j < nums[i-1]; j++)
                v.push_back(nums[i]);
        }
        return v;
    }
};

//O(m*n)
class Solution2 {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i += 2)
            v.insert(v.end(), nums[i], nums[i+1]);
        return v;
    }
};

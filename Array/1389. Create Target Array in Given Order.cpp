//O(n^2)
class Solution1 {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target = {};
        for (int i = 0; i < nums.size(); i++)
            target.insert(target.begin() + index[i], nums[i]);
        return target;
    }
};

//O(n^2)
class Solution2 {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target (n);
        for (int i = 0; i < n; i++)
        {
            for (int j = n-1; j > index[i]; j--)
                target[j] = target[j-1];
            target[index[i]] = nums[i];      
        }
        return target;
    }
};


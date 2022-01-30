//O(n^2)
class Solution1 {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (abs(nums[i]-nums[j]) == k)
                    count++;
            }
        }
        return count;
    }
};

//O(n)
class Solution2 {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> ct (101);
        for (int i = 0; i < nums.size(); i++)
            ct[nums[i]]++;
        
        int count = 0; 
        for (int i = k + 1; i < 101; i++)
            count += ct[i] * ct[i-k];
            
        return count;
    }
};

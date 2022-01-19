//O(n)
class Solution1 {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        while (i <= j)
        {
            if (i == j)
                nums[i] *= nums[i];
            else
            {
                nums[i] *= nums[i];
                nums[j] *= nums[j];    
            }
            i++;
            j--;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

//O(n)
class Solution2 {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0, j = nums.size()-1;
        vector<int> v (nums.size());
        int k = nums.size() - 1;
        while (i <= j)
        {
            if (abs(nums[i]) > abs(nums[j]))
            {
                v[k] = nums[i]*nums[i];
                i++;
                k--;
            }      
            else
            {
                v[k] = nums[j]*nums[j];
                j--;
                k--;
            }   
        }
        return v;
    }
};

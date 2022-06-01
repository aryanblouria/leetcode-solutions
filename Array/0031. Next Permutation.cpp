//O(n!)
class Solution1 {
public:
    void nextPermutation(vector<int>& nums) {
        vector<vector<int>> v;
        permute(nums, 0, v);
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size()-1; i++)
        {
            if (nums == v[i])
            {
                nums = v[i+1];
                return;
            }            
        }
        nums = v[0];
    }
    
    void permute(vector<int> &nums, int index, vector<vector<int>> &v)
    {
        if (index == nums.size())
        {
            v.push_back(nums);
              return;
        }
        
        for (int i = index; i < nums.size(); i++)
        {
            if(index != i && nums[index] == nums[i])
                continue;
            swap(nums[index], nums[i]);
            permute(nums, index+1, v);
            swap(nums[index], nums[i]);
        }  
    }   
};

//O(n)
class Solution2 {
public:
    void nextPermutation(vector<int>& nums) {
        int* arr = new int[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            arr[i] = nums[i];
        next_permutation(arr, arr+nums.size());
        for (int i = 0; i < nums.size(); i++)
            nums[i] = arr[i];
    }
};

//O(n)
class Solution3 {
public:
    void nextPermutation(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();
        for (i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i+1])
                break;
        }
        if (i == -1) reverse(nums.begin(), nums.end());
        else 
        {
            for (j = n - 1; j > i; j--)
            {
                if (nums[j] > nums[i])
                    break;
            }   
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};

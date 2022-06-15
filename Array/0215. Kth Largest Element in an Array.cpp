//O(n*log(n))
class Solution1 {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};

//O(k*n*log(k))
class Solution2 {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for (int i = 0; i < nums.size(); i++)
            q.push(nums[i]);
        while (k > 1)
        {
            q.pop();
            k--;
        }
        return q.top();
    }
};

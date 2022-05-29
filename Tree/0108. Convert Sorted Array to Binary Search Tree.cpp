class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return NULL;
        if (nums.size() == 1)
        {
            TreeNode* p = new TreeNode;
            p->val = nums[0];
            p->left = NULL;
            p->right = NULL;
            return p;
        }
        
        TreeNode* root = new TreeNode;
        root->val = nums[nums.size()/2];
        root->left = NULL;
        root->right = NULL;
        
        vector<int> v (nums.begin(), nums.begin() + nums.size()/2);
        vector<int> w (nums.begin() + nums.size()/2 + 1, nums.end());
        
        root->left = sortedArrayToBST(v);
        root->right = sortedArrayToBST(w);
        return root;
        
    }
};


//O(n)
class Solution {
public:
    int findMax(TreeNode* root, int& mx)
    {
        if (root == NULL) return 0;
        int leftmax = max(0, findMax(root->left, mx));
        int rightmax = max(0, findMax(root->right, mx));
        mx = max(mx, leftmax + rightmax + root->val);
        
        return max(leftmax, rightmax) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int mx = INT_MIN;
        findMax(root, mx);
        return mx;
    }
};

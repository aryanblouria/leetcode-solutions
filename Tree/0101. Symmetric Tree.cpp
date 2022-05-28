class Solution1 {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* p = root;
        stack<TreeNode*> s;
        
        if (p == NULL) return false;
        return symmetric(root->left, root->right);
    }
    
    bool symmetric(TreeNode* left, TreeNode* right)
    {
        if (left == NULL || right == NULL)
            return left == right;
        else if (left->val != right->val)
            return false;
        return symmetric(left->left, right->right) && symmetric(left->right, right->left);
    }
};

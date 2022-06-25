class Solution1 {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* p = root;
        while (p != NULL)
        {
            if (p->val == val)
                return p;
            else if (p->val > val)
                p = p->left;
            else
                p = p->right;
        }
        return NULL;
    }
};

class Solution2 {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL || root->val == val)
            return root;
        return (root->val > val) ? searchBST(root->left, val) : searchBST(root->right, val);
    }
};

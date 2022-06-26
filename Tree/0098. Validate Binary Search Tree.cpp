class Solution {
public:
    bool isValid(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == NULL) return true;
        if (p != NULL && root->val <= p->val || q != NULL && root->val >= q->val)
            return false;
        return isValid(root->left, p, root) && isValid(root->right, root, q);
    }
    
    bool isValidBST(TreeNode* root) {
        return isValid(root, NULL, NULL);
    }
};

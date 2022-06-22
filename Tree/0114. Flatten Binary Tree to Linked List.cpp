//O(n)
class Solution {
    TreeNode* p = NULL;
public:
    void flatten(TreeNode* root) {
        if (root == NULL) return;
        flatten(root->right);
        flatten(root->left);
        
        root->right = p;
        root->left = NULL;
        p = root;
    }
};

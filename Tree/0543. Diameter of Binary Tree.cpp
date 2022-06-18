class Solution {
public:
    int height(TreeNode* p, int& d)
    {
        if (p == NULL)
            return 0;
        
        int lh = height(p->left, d);
        int rh = height(p->right, d);
        d = max(d, lh+rh);
        return 1 + max(lh, rh);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int d = 0;
        height(root, d);
        return d;
    }

};

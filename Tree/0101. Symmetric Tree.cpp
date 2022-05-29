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

class Solution2 {
public:
    bool isSymmetric(TreeNode* root) {
        TreeNode* p = root;
        queue<TreeNode*> q1, q2; 
        
        q1.push(root->left);
        q2.push(root->right);
        
        while (!q1.empty() && !q2.empty())
        {
            TreeNode* left = q1.front();
            TreeNode* right = q2.front();
            q1.pop();
            q2.pop();
            
            if (left == NULL && right == NULL)
                continue;
            if (left == NULL || right == NULL)
                return false;
            if (left->val != right->val)
                return false;
            q1.push(left->left);
            q1.push(left->right);
            q2.push(right->right);
            q2.push(right->left);
        }
        return true;
    }
        
};

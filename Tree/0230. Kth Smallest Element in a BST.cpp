class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> s; 
        while (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
        
        while (k--)
        {
            TreeNode* p = s.top();
            s.pop();
            if (k == 0) return p->val;
            
            TreeNode* q = p->right;
            while (q != NULL)
            {
                s.push(q);
                q = q->left;
            }
        }
        return -1;
    }
};

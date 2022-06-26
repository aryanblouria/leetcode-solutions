class BSTIterator {
    stack<TreeNode*> s;
public:
    BSTIterator(TreeNode* root) {
        while (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* p = s.top();
        s.pop();
        while (p->right != NULL)
        {
            s.push(p->right);
            p->right = p->right->left;
        }
        return p->val;
        
    }
    
    bool hasNext() {
        return !s.empty();
    }
};

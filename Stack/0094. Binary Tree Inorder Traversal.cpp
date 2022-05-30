//O(n)
class Solution1 {
    vector<int> v = {};
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            return v;
        }
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
        return v;
    }
};

//O(n)
class Solution2 {
    vector<int> v = {};
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* p = root;
        
        while (p != NULL || !s.empty())
        {
            if (p != NULL)
            {
                s.push(p);
                p = p->left;    
            }
            else
            {
                p = s.top();
                s.pop();
                v.push_back(p->val);
                p = p->right;
            }  
        }
        return v;
    }
};

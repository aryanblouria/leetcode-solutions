//O(n)
class Solution1 {
    vector<int> v;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            return v;
        }
        
        v.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return v;
    }
};

//O(n)
class Solution2 {
    vector<int> v;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* p = root;
        
        while (p != NULL || !s.empty())
        {
            if (p != NULL)
            {
                v.push_back(p->val);
                s.push(p);
                p = p->left;
            }
            else
            {
                p = s.top();
                s.pop();
                p = p->right;
            }
        }
        return v;
    }
};

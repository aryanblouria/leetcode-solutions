//O(n)
class Solution1 {
    vector<int> v;
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
            return v;
        }
        
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        v.push_back(root->val);
        return v;
    }
};

//O(n)
class Solution2 {
    vector<int> v;
public:
    vector<int> postorderTraversal(TreeNode* root) {
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
                TreeNode *temp = s.top()->right;
                if (temp == NULL)
                {
                    temp = s.top();
                    s.pop();
                    v.push_back(temp->val);
                    while (!s.empty() && temp == s.top()->right)
                    {
                        temp = s.top();
                        s.pop();
                        v.push_back(temp->val);
                    }
                }
                else
                    p = temp;
            }
        }
        return v;
    }
};

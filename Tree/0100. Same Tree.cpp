//O(n)
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v, w;
        stack<TreeNode*> s, t;
        int n1 = 0, n2 = 0;
        while (p != NULL || !s.empty())
        {
            if (s.empty()) n1++;
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
        
        while (q != NULL || !t.empty())
        {
            if (t.empty()) n2++;
            if (q != NULL)
            {
                t.push(q);
                q = q->left;    
            }
            else
            {
                q = t.top();
                t.pop();
                w.push_back(q->val);
                q= q->right;
            }
        }
        return (v == w && n1 == n2);
    }
};

class Solution2 {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) return p == q;
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
            
    }
};

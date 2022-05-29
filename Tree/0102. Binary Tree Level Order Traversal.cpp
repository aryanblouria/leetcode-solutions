class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        
        if (root != NULL) q.push(root);
        while (!q.empty())
        {
            vector<int> w;
            int size = q.size();
            
            for (int i = 0; i < size; i++)
            {
                TreeNode* p = q.front();
                w.push_back(p->val);
                if (p->left != NULL) q.push(p->left);
                if (p->right != NULL) q.push(p->right);
                q.pop();
            }
            v.push_back(w);
        }
        return v;
    }
};

//O(n)
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)     {
        vector<vector<int>> v;
        if (root == NULL) return v;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool leftToRight = true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> w (size);
            for (int i = 0; i < size; i++)
            {
                TreeNode* p = q.front();
                q.pop();
                
                int k = (leftToRight) ? i : (size - 1 - i);
                w[k] = p->val;
                
                if (p->left != NULL)
                    q.push(p->left);
                if (p->right != NULL)
                    q.push(p->right);
            }
            leftToRight = !leftToRight;
            v.push_back(w);
        }
        return v;
    }
};

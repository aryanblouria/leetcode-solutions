//O(n)
class Solution {
public:
    TreeNode* createTree(vector<int> &preorder, int l1, int h1, vector<int> &inorder, int l2, int h2, map<int, int> &m)
    {
        if (l1 > h1 || l2 > h2) return NULL;
        TreeNode* root = new TreeNode;
        root->val = preorder[l1];
        
        int k = m[root->val];
        int n = k - l2;
        
        root->left = createTree(preorder, l1+1, l1+n, inorder, l2, k - 1, m);
        root->right = createTree(preorder, l1+n+1, h1, inorder, k+1, h2, m);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int l1 = 0, h1 = preorder.size()-1;
        int l2 = 0, h2 = inorder.size()-1;
        
        map<int, int> m;
        for (int i = l2; i <= h2; i++)
            m[inorder[i]] = i;
        
        return createTree(preorder, l1, h1, inorder, l2, h2, m);
    }
};

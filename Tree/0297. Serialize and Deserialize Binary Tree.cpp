class Codec {
public:
    string serialize(TreeNode* root) {
        if (root == NULL) return "";
        string s = "";
        
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode* p = q.front();
            q.pop();
            
            if (p == NULL) s.append("#,");
            else 
            {
                s.append(to_string(p->val)+',');
                q.push(p->left);
                q.push(p->right);
            }
        }
        return s;
    }
    
    TreeNode* deserialize(string data) {
        if (data.length() == 0) return NULL;
        stringstream ss (data);
        string str = "";
        getline(ss, str, ',');
        
        TreeNode *root = new TreeNode(stoi(str));
        queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()) {
            
            TreeNode *node = q.front(); 
            q.pop(); 
            
            getline(ss, str, ',');
            if (str == "#")
                node->left = NULL; 
            else
            {
                TreeNode* p1 = new TreeNode(stoi(str)); 
                node->left = p1; 
                q.push(p1); 
            }
            
            getline(ss, str, ',');
            if(str == "#")
                node->right = NULL; 
            else 
            {
                TreeNode* p2 = new TreeNode(stoi(str)); 
                node->right = p2;
                q.push(p2); 
            }
        }
        return root; 
    }
};

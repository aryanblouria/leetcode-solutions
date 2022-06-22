class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return NULL;
        Node *p = root, *q = NULL;
        
        while (p->left != NULL)
        {
            q = p;
            while (q != NULL)
            {
                q->left->next = q->right;
                if (q->next)
                    q->right->next = q->next->left;
                q = q->next;
            }
            p = p->left;
        }
        return root;
    }
};

//O(n)
class Solution1 {
public:
    void deleteNode(ListNode* node) {
        while (node->next != NULL)
        {
            node->val = node->next->val;
            if (node->next->next == NULL) 
                node->next = NULL;
            else
                node = node->next;
        }
    }
};

//O(1)
class Solution2 {
public:
    void deleteNode(ListNode* node) {
        ListNode *next = node->next;
        *node = *next;
        delete next;
    }
};

//O(1)
class Solution3 {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

//O(n)
class Solution1 {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        if (p == NULL) return head;
        
        ListNode* q = p->next;
        while (q != NULL)
        {
            if (p->val != q->val)
            {
                p = p->next;
                q = q->next;
            }
            else 
            {
                p->next = q->next;
                q = q->next;
            }
        }
        return head;
    }
};

//O(n)
class Solution2 {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head;
        ListNode* q = new ListNode;
        
        if (p == NULL) return head;
        q->val = p->val;
        q->next = NULL;
        p = p->next;
        ListNode* h = q;
        
        while (p != NULL)
        {
            if (p->val != q->val)
            {
                q->next = p;
                q = q->next;
            }
            else
                q->next = NULL;
            p = p->next;
        }
        return h;
    }
};

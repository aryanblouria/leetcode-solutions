//O(m+n)
class Solution1 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* head;
        
        if (p == NULL)
            return q;
        if (q == NULL)
            return p;
        
        if (p->val < q->val)
        {
            head = p;
            p = p->next;
        }
        else
        {
            head = q;
            q = q->next;
        }
        ListNode* t = head;
        
        while (p != NULL && q != NULL)
        {
            if (p->val < q->val)
            {
                t->next = p;
                p = p->next;
                t = t->next;
            }
            else
            {
                t->next = q;
                q = q->next;
                t = t->next;
            }
        }
        while (p != NULL)
        {
            t->next = p;
            p = p->next;
            t = t->next;
        }
        while (q != NULL)
        {
            t->next = q;
            q = q->next;
            t = t->next;
        }
        return head;
    }
};

//O(m+n)
class Solution2 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        
        if (p == NULL)
            return q;
        if (q == NULL)
            return p;
        
        if (p->val < q->val)
        {
            p->next = mergeTwoLists(p->next, q);
            return p;
        }
        else
        {
            q->next = mergeTwoLists(p, q->next);
            return q;
        }
    }
};

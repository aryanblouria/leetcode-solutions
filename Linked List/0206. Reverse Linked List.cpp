//O(n)
class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        ListNode* q = NULL;
        while (p != NULL)
        {
            ListNode* t = new ListNode;
            t->val = p->val;
            t->next = q;
            q = t;
            p = p->next;
        }
        return q;
    }
};

//O(n)
class Solution2 {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p = NULL, *q = head;
        ListNode *r = (head == NULL) ? NULL : head->next;
        while (q != NULL)
        {
            q->next = p;
            p = q;
            q = r;
            if (r != NULL) r = r->next;
        }
        return p;
    }
};

//O(n)
class Solution3 {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;
        ListNode* rev = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rev;
    }
};

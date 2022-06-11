//O(n/k)
class Solution {
public:
    int length(ListNode* head)
    {
        ListNode* p = head;
        int l = 0;
        while (p != NULL)
        {
            l++;
            p = p->next;
        }
        return l;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if (length(head) < k) return head;
        ListNode *p = NULL, *q = head, *r = head->next;
        
        for (int i = 0; i < k; i++)
        {
            q->next = p;
            p = q;
            q = r;
            if (r != NULL) r = r->next;
        }
        
        head->next = reverseKGroup(q, k);
        return p;
    }
};

//O(n*k)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;
        
        int length = 0;
        ListNode* t = head;
        while (t != NULL)
        {
            length++;
            t = t->next;
        }
        
        for (int i = 0; i < k % length; i++)
        {
            ListNode* p = head, *q = head;
            while (p->next != NULL)
            {   
                q = p;
                p = p->next;
            }
            q->next = NULL;
            p->next = head;
            head = p;
        }
        return head;
        
    }
};

//O(n)
class Solution1 {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> s;
        ListNode* q = head;
        
        while (q != NULL)
        {
            if (s.find(q) != s.end())
                return q;
            s.insert(q);
            q = q->next;
        }
        return NULL;
    }
};

//O(n)
class Solution2 {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast)
            {
                ListNode* begin = head;
                while (begin != slow)
                {
                    begin = begin->next;
                    slow = slow->next;
                }
                return begin;
            }
        }
        return NULL;
    }
};

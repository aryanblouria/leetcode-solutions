//O(n)
class Solution1 {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> s;
        ListNode* t = head;
        
        if (t != NULL && t->next == NULL) return false;        
        while (t != NULL)
        {
            if (s.find(t) == s.end())
                s.insert(t);
            else
                return true;
            t = t->next;
        }
        return false;
    }
};

//O(n)
class Solution2 {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        if (fast == NULL) return false;
        while (fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if (fast == slow) return true;
        }
        return false;
    }
};

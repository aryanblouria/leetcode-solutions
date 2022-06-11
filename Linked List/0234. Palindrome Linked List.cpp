//O(n)
class Solution1 {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *p = head;
        string s = "";
        
        while (p != NULL)
        {
            s += to_string(p->val);
            p = p->next;
        }
        
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    }
};

//O(n/2)
class Solution2 {
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
    
    bool isPalindrome(ListNode* head) 
    {
        int l = length(head);
        int m = l/2;
        ListNode* p = NULL;
        ListNode* q = head;
        ListNode* r = head->next;
        
        for (int i = 0; i < m; i++)
        {
            q->next = p;
            p = q;
            q = r;
            if (r != NULL) r = r->next;
        }
        
        if (l % 2 != 0) q = q->next;
        while (q != NULL && p != NULL)
        {
            if (p->val != q->val)
                return false;
            p = p->next;
            q = q->next;
        }
        return true;
    }
};

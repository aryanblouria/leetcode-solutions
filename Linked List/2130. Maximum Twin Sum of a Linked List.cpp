//O(n)
class Solution1 {
public:
    int pairSum(ListNode* head) {
        ListNode* p = head;
        vector<int> v;
        while (p != NULL)
        {
            v.push_back(p->val);
            p = p->next;
        }
        
        int i = 0, j = v.size()-1, mx = INT_MIN;
        while (i < j)
        {
            mx = max(v[i]+v[j], mx);
            i++;
            j--;
        }
        return mx;
    }
};

//O(n)
class Solution2 {
public:
    int pairSum(ListNode* head) {
        ListNode *q = head;
        int length = 0;
        while (q != NULL)
        {
            length++;
            q = q->next;
        }
        
        int count = 0;
        ListNode *a = NULL, *b = head, *c = head->next;
        while (count < length/2)
        {
            b->next = a;
            a = b;
            b = c;
            c = c->next;
            count++;
        }
        
        ListNode *newHead = a;
        head = b;
        int mx = 0;
        while (head != NULL && newHead != NULL)
        {
            mx = max(head->val + newHead->val, mx);   
            head = head->next;
            newHead = newHead->next;
        }
        return mx;
    }
};

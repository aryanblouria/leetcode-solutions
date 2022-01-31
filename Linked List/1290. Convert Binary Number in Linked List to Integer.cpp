//O(n)
class Solution1 {
public:
    int getDecimalValue(ListNode* head) {
        int length = 0, decimal = 0;
        ListNode *p = head, *q = head;
        while (p != NULL)
        {
            length++;
            p = p->next;
        }
        
        int i = length - 1;
        while (q != NULL)
        {
            decimal += pow(2, i) * q->val;
            i--;
            q = q->next;
        }
        return decimal;
    }
};

//O(n)
class Solution2 {
public:
    int getDecimalValue(ListNode* head) {
        string binary = "";
        ListNode* p = head;
        
        while (p != NULL)
        {
            binary += to_string(p->val);
            p = p->next;
        }
        return stoull(binary, 0, 2);
    }
};

//O(n)
class Solution3 {
public:
    int getDecimalValue(ListNode* head) {
        int decimal = 0;
        ListNode* p = head;
        
        while (p != NULL)
        {
            decimal = (decimal * 2) + p->val;
            p = p->next;
        }
        return decimal;
    }
};

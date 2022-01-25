//O(m+n)
class Solution1 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* l3 = new ListNode;
        l3->val = l1->val + l2->val;
        if (l3->val >= 10) 
        {
            l3->val %= 10;
            carry = 1;
        }
        l3->next = NULL;
        
        ListNode* p = l3;
        l1 = l1->next;
        l2 = l2->next;

        while (l1 != NULL && l2 != NULL)
        {
            int sum = l1->val + l2->val + carry;
            ListNode* t = new ListNode;
            if (sum < 10)
            {
                t->val = sum;
                carry = 0; 
            }
            else
            {
                t->val = sum % 10;
                carry = 1;
            }  
            p->next = t;
            p = t;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while (l1 != NULL)
        {
            p->next = l1;
            int sum = l1->val + carry;
            if (sum < 10)
            {
                 l1->val = sum;
                 carry = 0;
            }
            else
            {
                l1->val = sum % 10;
                carry = 1;
            }
            l1 = l1->next;
            p = p->next;
        }
        while (l2 != NULL)
        {
            p->next = l2;
            int sum = l2->val + carry;
            if (sum < 10)
            {
                l2->val = sum;
                carry = 0;   
            }
            else
            {
                l2->val = sum % 10;
                carry = 1;
            }
            l2 = l2->next;
            p = p->next;
        }
         
        if (carry)
        {
            ListNode* t = new ListNode;
            t->val = 1;
            t->next = NULL;
            p->next = t;
        }
       return l3;
    }
};

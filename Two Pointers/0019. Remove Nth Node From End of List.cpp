//O(n)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* tmp = head;
        int length = 1;
        while (temp->next != NULL)
        {
            length++;
            temp = temp->next;
        }     
        int m = ((length - n - 1) > 0) ? (length - n - 1) : 0;
        while(m--)
            tmp = tmp->next;
        if (length == n)
            head = head->next;
        else
            tmp->next = tmp->next->next;    
        return head;   
    }
};

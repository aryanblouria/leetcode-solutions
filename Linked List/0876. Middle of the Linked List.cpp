//O(n)
class Solution1 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length = 1;
        while (temp->next != NULL)
        {
            length++;
            temp = temp->next;
        }     
        int n = length/2;
        while(n--)
            head = head->next;
        return head;      
    } 
};

//O(n)
class Solution2 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL)
        {
            fast = fast->next;
            if (fast->next != NULL)
                fast = fast->next;
            slow = slow->next;
        }
        return slow;
    } 
};

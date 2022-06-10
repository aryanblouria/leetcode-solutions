//O(n*m)
class Solution1 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t = headA;
        while (t != NULL || headB != NULL)
        {
            if (t == NULL) 
            {
                headB = headB->next;
                t = headA;
                continue;
            }
            if (t == headB)
                return t;
            t = t->next;
        }
        return NULL;
    }
};

//O(m+n)
class Solution2 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> v;
        while (headA != NULL)
        {
            v.push_back(headA);
            headA = headA->next;
        }
        while (headB != NULL)
        {
            if (find(v.begin(), v.end(), headB) != v.end())
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};

//O(n)
class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> m;
        Node* p = head;
        
        while (p != NULL)
        {
            m[p] = new Node(p->val);
            p = p->next;
        }
        
        p = head;
        while (p != NULL)
        {
            m[p]->next = m[p->next];
            m[p]->random = m[p->random];
            p = p->next;
        }
        return m[head];
    }
};

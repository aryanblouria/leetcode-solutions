class Solution {
    unordered_map<Node*, Node*> m;
public:
    Node* cloneGraph(Node* node) {
        if (node == NULL)
            return NULL;
        if (m.find(node) == m.end())
        {
            m[node] = new Node(node->val, {});
            for (auto x: node->neighbors)
                m[node]->neighbors.push_back(cloneGraph(x));
        }
        return m[node];
    }
};

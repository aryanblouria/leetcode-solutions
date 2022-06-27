class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> v (n, 0);
        queue<int> q;
        
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0) continue;
            v[i] = 1;
            q.push(i);
            
            while (!q.empty())
            {
                int x = q.front();
                for (auto p: graph[x])
                {
                    if (v[p] == 0)
                    {
                        v[p] = -v[x];
                        q.push(p);
                    }
                    else if (v[p] == v[x])
                        return false;
                }
                q.pop();
            }
        }
        return true; 
    }
};

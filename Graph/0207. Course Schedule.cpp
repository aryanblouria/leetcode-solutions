class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> g (numCourses);
        vector<int> v(numCourses, 0);
        vector<int> bfs;
        
        for (auto &x: prerequisites)
        {
            g[x[1]].push_back(x[0]);
            v[x[0]]++;
        }
        
        for (int i = 0; i < numCourses; i++)
            if (v[i] == 0) bfs.push_back(i);
        for (int i = 0; i < bfs.size(); i++)
            for (auto j: g[bfs[i]])
                if (--v[j] == 0) 
                    bfs.push_back(j);
        return bfs.size() == numCourses;
    }
};

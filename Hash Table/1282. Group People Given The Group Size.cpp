//O(n)
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector<int>> v;
        map<int, vector<int>> m;
        
        for (int i = 0; i < groupSizes.size(); i++)
        {
            int gsize = groupSizes[i];
            if (m.count(gsize) > 0)
                m[gsize].push_back(i);
            else
                m[gsize] = vector<int> {i};
            if (m[gsize].size() == groupSizes[i])
            {
                v.push_back(m[gsize]);
                m.erase(gsize);
            }
        }
        return v;
    }
};

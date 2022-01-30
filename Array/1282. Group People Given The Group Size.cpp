//O(n)
class Solution1 {
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

//O(n)
class Solution2 {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> v, groups (groupSizes.size()+1);
        for (int i = 0; i < groupSizes.size(); i++) 
        {
            int gsize = groupSizes[i];
            groups[gsize].push_back(i);
            if (groups[gsize].size() == gsize) 
            {
                v.push_back(groups[gsize]);
                groups[gsize] = {};
            }
        }
        return v;
    }
};

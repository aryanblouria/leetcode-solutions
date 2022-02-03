//O(n)
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, int> m;
        for (int i = 0; i < paths.size(); i++)
        {
            m[paths[i][0]]++;
            m[paths[i][1]]--;
        }
        
        for (auto x: m)
            if (x.second == -1)
                return x.first;
        return "";
    }
};

//O(n)
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for (auto x: arr)
            m[x]++;
        
        vector<int> v;
        for (auto x: m)
            v.push_back(x.second);
        set<int> s (v.begin(), v.end());
        return v.size() == s.size();
    }
};

//O(n)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        for (auto x: nums1)
            m[x] = 1;
        for (auto x: nums2)
            if (m.find(x) != m.end()) m[x] = 0;

        vector<int> v;
        for (auto x: m)
            if (x.second == 0) v.push_back(x.first);
        return v;
    }
};

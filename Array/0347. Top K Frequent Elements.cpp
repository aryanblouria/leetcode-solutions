//O(n*log(n))
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for (auto x: nums)
            m[x]++;
        
        vector<int> v;
        priority_queue<pair<int, int>> q;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            q.push(make_pair(it->second, it->first));
            if (q.size() > (int)m.size() - k)
            {
                v.push_back(q.top().second);
                q.pop();
            }
        }
        return v;
    }
};

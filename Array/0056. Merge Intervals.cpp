//O(n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)   {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        
        for (int i = 0; i < intervals.size(); i++)
        {
            if (merged.empty() || merged.back()[1] < intervals[i][0])
            {
                merged.push_back({intervals[i][0], intervals[i][1]});
            }
            else
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
        
        return merged;
    }
};

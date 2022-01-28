//O(n)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> greatest;
        for (auto x: candies)
            greatest.push_back(x + extraCandies >= mx);
        return greatest;
    }
};

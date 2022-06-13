//O(2^n)
class Solution {
public:
    void comb(int k, int target, vector<int> &candidates, vector<vector<int>> &v, vector<int> &w)
    {
        if (target == 0)
        {
            v.push_back(w);
            return;
        }
        for (int i = k; i < candidates.size(); i++)
        {
            if (i > k && candidates[i] == candidates[i-1]) continue;
            if (candidates[i] > target) break;
            w.push_back(candidates[i]);
            comb(i + 1, target - candidates[i], candidates, v, w);
            w.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)     {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> v;
        vector<int> w;
        comb(0, target, candidates, v, w);
        return v;
    }
};


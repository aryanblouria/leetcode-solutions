//O(2^n)
class Solution {
public:
    void comb(int k, int target, vector<int> &candidates, vector<vector<int>> &v, vector<int> &w)
    {
        if (k == candidates.size())
        {
            if (target == 0) v.push_back(w);
            return;
        }
        if (candidates[k] <= target)
        {
            w.push_back(candidates[k]);
            comb(k, target - candidates[k], candidates, v, w);
            w.pop_back();
        }
        comb(k+1, target, candidates, v, w);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)     {
        vector<vector<int>> v;
        vector<int> w;
        comb(0, target, candidates, v, w);
        return v;
    }
};


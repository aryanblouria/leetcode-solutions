//O(n^2)
class Solution1 {
public:
    int trap(vector<int>& height) {
        int total = 0;
        for (int i = 0; i < height.size(); i++)
        {
            int lmax = 0, rmax = 0;
            for (int j = 0; j <= i; j++)
                lmax = max(lmax, height[j]);
            for (int k = i; k < height.size(); k++)
                rmax = max(rmax, height[k]);
            int w = min(lmax, rmax) - height[i];
            total += w;
        }
        return total;
    }
};

//O(n)
class Solution2 {
public:
    int trap(vector<int>& height) {
        vector<int> prefix (height.size());
        vector<int> suffix (height.size());
        
        prefix[0] = height[0];
        for (int i = 1; i < height.size(); i++)
            prefix[i] = max(prefix[i-1], height[i]);
        
        suffix[height.size()-1] = height[height.size()-1];
        for (int i = height.size()-2; i >= 0; i--)
            suffix[i] = max(suffix[i+1], height[i]);
        
        int total = 0;
        for (int i = 0; i < height.size(); i++)
            total += min(prefix[i], suffix[i]) - height[i];
        return total;
    }
};

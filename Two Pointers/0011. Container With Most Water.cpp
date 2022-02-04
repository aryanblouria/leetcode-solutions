//O(n)
class Solution {
public:
    int maxArea(vector<int>& height) {
       int i = 0, j = height.size()-1;
       int res = 0, area = 0;
       while (i < j)
       {
            area = (j - i) * min(height[i], height[j]);
            if (area > res)
                res = area;
            if (min(height[i], height[j]) == height[i])
                i++;
            else
                j--;
       }
       return res;
    }
};

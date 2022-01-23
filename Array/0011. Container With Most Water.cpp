//O(n^2)
class Solution1 {
public:
    int maxArea(vector<int>& height) {
       int res = 0, area = 0;
       for (int i = 0; i < height.size()-1; i++)
       {
           for (int j = i+1; j < height.size(); j++)
           {
               area = (j - i) * min(height[i], height[j]);
               res = max(res, area);
           }
       }
       return res;
    }
};

//O(n)
class Solution2 {
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

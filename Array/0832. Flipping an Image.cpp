//O(n^2)
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++)
            reverse(image[i].begin(), image[i].end());
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < image.size(); j++)
            {
                if (image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        return image;
    }
};
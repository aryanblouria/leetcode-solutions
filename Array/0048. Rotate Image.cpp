//O(n^2)
class Solution1 {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> v (matrix.size(), vector<int> (matrix.size()));
        for (int i = matrix.size()-1; i >= 0; i--)
            for (int j = 0; j < matrix.size(); j++)
                v[j][matrix.size()-i - 1] = matrix[i][j];
      
        for (int i = 0; i < v.size(); i++)
            for (int j = 0; j < v[0].size(); j++)
                matrix[i][j] = v[i][j];
    }
};

//O(n^2)
class Solution2 {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]);
        
        for (int i = 0; i < matrix.size(); i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};

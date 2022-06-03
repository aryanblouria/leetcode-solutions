//O(n*m)
class Solution1 {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == target)
                    found = true;
            }
        }
        return found;
    }
};

//O(n*m)
class Solution2 {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] > target) break;
                if (matrix[i][j] == target)
                    found = true;
            }
        }
        return found;
    }
};


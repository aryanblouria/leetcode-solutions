//O(n^2)
class Solution1 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        for (int i = 0; i < mat.size(); i++)
            for (int j = 0; j < mat.size(); j++)
                if (i == j || i + j + 1 == mat.size()) 
                    s += mat[i][j];
        return s;
    }
};

//O(n)
class Solution2 {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        for (int i = 0, j = mat.size()-1; i < mat.size(); i++, j--)
        {
            s += mat[i][i];
            if (i != j) s += mat[i][j];
        }
        return s;
    }
};

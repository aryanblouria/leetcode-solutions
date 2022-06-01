//O(m*n*nz)
class Solution1 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v, w;
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    v.push_back(i);
                    w.push_back(j);
                }
            }
        }
        
        
        for (int k = 0; k < v.size(); k++)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == v[k] || j == w[k])
                        matrix[i][j] = 0;;
                }
            }
        }

    }
};

//O(m*n)
class Solution2 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v (m, -1), w (n, -1);
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    v[i] = 0;
                    w[j] = 0;
                }
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i] == 0 || w[j] == 0)
                    matrix[i][j] = 0;
            }
        }    

    }
};

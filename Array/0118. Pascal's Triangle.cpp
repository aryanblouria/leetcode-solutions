//O(n*m)
class Solution1 {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> w;
            if (i == 0) w.push_back(1);
            else if (i == 1)
            {
                w.push_back(1);
                w.push_back(1);
            }
            else
            {
                vector<int> u = v[i-1];
                w.push_back(0 + u[0]);
                for (int j = 1; j < v[i-1].size(); j++)
                    w.push_back(v[i-1][j-1] + v[i-1][j]);
                w.push_back(0 + u[u.size()-1]);
            }
            v.push_back(w);
        }
        return v;
    }
};

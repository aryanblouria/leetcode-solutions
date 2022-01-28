class SubrectangleQueries {
private:
    vector<vector<int>> x;
    vector<vector<int>> y;
    vector<int> v;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        x = rectangle;
        v = {0, 0, 0, 0, 0};
    }    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        y.push_back({row1, row2, col1, col2, newValue});
    }    
    int getValue(int row, int col) {
        for(int i = y.size()-1; i >= 0; i--)
        {
            if(row >= y[i][0] && row <= y[i][1] && col >= y[i][2] && col <= y[i][3])
                return y[i][4];
        }
        return x[row][col];
    }
};

//O(m*n)
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> m;
        string first = "qwertyuiop", second = "asdfghjkl", third = "zxcvbnm";
        for (auto c: first) m[c] = 1;
        for (auto c: second) m[c] = 2;
        for (auto c: third) m[c] = 3;
        
        vector<string> v;
        for (int i = 0; i < words.size(); i++)
        {
            int numrows = 0;
            bool row1 = false, row2 = false, row3 = false;
            for (int j = 0; j < words[i].length(); j++)
            {
                if (m[words[i][j]] == 1) row1 = true;
                if (m[words[i][j]] == 2) row2 = true;
                if (m[words[i][j]] == 3) row3 = true;
            }
            if (row1) numrows++;
            if (row2) numrows++;
            if (row3) numrows++;
            if (numrows == 1) v.push_back(words[i]);
        }
        return v;
    }
};

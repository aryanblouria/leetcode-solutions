//O(n)
class Solution1 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if (strs[0] == "")
            return prefix;
        int j = 0;
        for (int i = 0; i < strs.size(); i++)
        {
            if (j == strs[0].length())
                break;
            char c = strs[0][j];
            if (strs[i][j] != c)
                break;
            if (i == strs.size() - 1 && strs[i][j] == c)
            {
                prefix += c;
                j++;
                i = 0;
            } 
        }
        return prefix;
    }
};

//O(n)
class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        sort(strs.begin(), strs.end());

        int i = 0, j = strs.size()-1, k = 0;
        while (strs[i][k] == strs[j][k] && k != min(strs[i].length(), strs[j].length()))
        {
            prefix += strs[i][k];
            k++;
        }
        return prefix;
    }
};

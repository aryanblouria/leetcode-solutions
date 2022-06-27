//O(m*n)
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m[1001][1001] = {};
        for (int i = 0; i < text1.length(); i++)
            for (int j = 0; j < text2.length(); j++)
                m[i+1][j+1] = (text1[i] == text2[j]) ? (m[i][j] + 1) : (max(m[i+1][j], m[i][j+1]));
        return m[text1.length()][text2.length()];
    }
};

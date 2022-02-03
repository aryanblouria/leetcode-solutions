//O(m*n)
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto word: words)
        {
            if (string(word.rbegin(), word.rend()) == word)
                return word;
        }
        return "";
    }
};

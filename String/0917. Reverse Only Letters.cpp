//O(n)
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string rev (s.length(), 'x');
        int j = 0, k = s.length()-1;
        while (j < s.length())
        {
            if (!isalpha(s[k]) && k > 0)
            {
                k--;
                continue;
            }
            if (isalpha(s[j]))
            {
                rev[k] = s[j];
                if (k > 0) k--;
            }
            else
                rev[j] = s[j];
            j++;
        }
        return rev;
    }
};

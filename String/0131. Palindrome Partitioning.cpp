//O(2^n^2)
class Solution {
public:
    void part(int index, string s, vector<string> &w, vector<vector<string>> &v)
    {
        if (index == s.length())
        {
            v.push_back(w);
            return;
        }
        for (int i = index; i < s.length(); i++)
        {
            if (isPalindrome(s, index, i))
            {
                w.push_back(s.substr(index, i - index + 1));
                part(i + 1, s, w, v);
                w.pop_back();
            }
        }
    }
    
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> v;
        vector<string> w;
        
        part(0, s, w, v);
        return v;
    }
};

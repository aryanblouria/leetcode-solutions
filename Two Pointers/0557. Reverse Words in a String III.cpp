//O(n^2)
class Solution {
public:
    string reverseString(string s) {
        int i = 0, j = s.length()-1;
        while (i < j)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }
    string reverseWords(string s) {
        vector<string> v;
        string res, word;
         
        stringstream ss (s);
        while (ss >> word)
            v.push_back(reverseString(word));

        for (int i = 0; i < v.size()-1; i++)
            res += v[i] + " ";
        res += v[v.size()-1];
        return res;
    }
};

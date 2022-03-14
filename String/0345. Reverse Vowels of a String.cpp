//O(n)
class Solution1 {
public:
    string reverseVowels(string s) {
        string t = "";
        for (auto x: s) 
            if (tolower(x) == 'a' || tolower(x) == 'e' || tolower(x) == 'i' || tolower(x) == 'o' || tolower(x) == 'u') 
                t += x;
        
        int k = t.length()-1;
        for (int i = 0; i < s.length(); i++)
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
                s[i] = t[k--];
        return s;
    }
};

//O(n)
class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if (tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u')
                i++;
            else if (tolower(s[j]) != 'a' && tolower(s[j]) != 'e' && tolower(s[j]) != 'i' && tolower(s[j]) != 'o' && tolower(s[j]) != 'u')
                j--;
            else 
            {
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++; j--;
            }
        }
        return s;
    }
};

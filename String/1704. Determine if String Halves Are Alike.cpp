//O(n)
class Solution {
public:
    bool halvesAreAlike(string s) {
        int i = 0, j = s.length()/2;
        int v1 = 0, v2 = 0;
        while (j < s.length())
        {
            if (toupper(s[i]) == 'A' || toupper(s[i]) == 'E' || toupper(s[i]) == 'I' || toupper(s[i]) == 'O' || toupper(s[i]) == 'U')
                v1++;
            if (toupper(s[j]) == 'A' || toupper(s[j]) == 'E' || toupper(s[j]) == 'I' || toupper(s[j]) == 'O' || toupper(s[j]) == 'U')
                v2++;
            i++;
            j++;
        }
        cout<<v1<<v2<<endl;
        return v1 == v2;
    }
};

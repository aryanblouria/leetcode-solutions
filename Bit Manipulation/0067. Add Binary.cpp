//O(m+n)
class Solution1 {
public:
    string addBinary(string a, string b) {
        int na = 0, nb = 0, r = 0;
        string s = "";
        for (int i = a.length()-1; i >= 0; i--)
            na += (a[i] - '0') * pow(2, a.length()-i-1);
        for (int i = b.length()-1; i >= 0; i--)
            nb += (b[i] - '0') * pow(2, b.length()-i-1);
        int nc = na + nb;
        if (nc == 0) return "0";
        while (nc > 0)
        {
            r = nc % 2;
            nc = nc / 2;
            s = to_string(r) + s;
        }
        return s;
    }
};

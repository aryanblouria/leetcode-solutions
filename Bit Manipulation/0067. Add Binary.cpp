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

//O(n)
class Solution2 {
public:
    string addBinary(string a, string b) {
       while (a.length() < b.length())
           a = "0" + a;
       while (b.length() < a.length())
           b = "0" + b;
       
       int carry = 0;
       string s = "";
       for (int i = a.length()-1; i >= 0; i--)
       {
           if (a[i] == '1' && b[i] == '1')
           {
               if (carry == 0)
                   s = "0" + s;
               else
                   s = "1" + s;
               carry = 1;
           }   
           else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
           {
               if (carry == 0)
                   s = "1" + s;
               else
               {
                   s = "0" + s;
                   carry = 1;
               }   
           }
           else
           {
               if (carry == 0)
                   s = "0" + s;
               else
               {
                   s = "1" + s;
                   carry = 0;
               }       
           }
       }
        if (carry != 0)
            s = "1" + s;
        return s;
    }
};

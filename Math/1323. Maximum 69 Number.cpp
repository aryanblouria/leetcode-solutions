//O(n)
class Solution1 {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '6')
            {
                s[i] = '9'; 
                break;
            }
        }
        return stoi(s);
    }
};

//O(n)
class Solution2 {
public:
    int maximum69Number (int num) {
        int digit = 0, maximum = -1, pos = 0, n = num;
        while (n > 0)
        {
            digit = n % 10;
            if (digit == 6) maximum = pos;
            n /= 10;
            pos++;
        }
        if (maximum == -1) return num;
        return num + 3 * pow(10, maximum);
    }
};

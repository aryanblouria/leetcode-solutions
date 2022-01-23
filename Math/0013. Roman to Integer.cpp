//O(n)
class Solution1 {
public:
    int romanToInt(string s) {
        int x = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'M') {x += 1000;}
            if (s[i] == 'D') {x += 500;}
            if (s[i] == 'C') 
            {
                if (s[i+1] == 'D')
                {
                    x += 400;
                    i++;
                }
                else if (s[i+1] == 'M')
                {
                    x += 900;
                    i++;
                }
                else
                    x += 100;
            }
            if (s[i] == 'L') {x += 50;}
            if (s[i] == 'X') 
            {
                if (s[i+1] == 'L')
                {
                    x += 40;
                    i++;
                }
                else if (s[i+1] == 'C')
                {
                    x += 90;
                    i++;
                }
                else
                    x += 10;
            }
            if (s[i] == 'V') {x += 5;}
            if (s[i] == 'I') 
            {
                if (s[i+1] == 'V')
                {
                    x += 4;
                    i++;
                }
                else if (s[i+1] == 'X')
                {
                    x += 9;
                    i++;
                }
                else
                    x += 1;
            }
        }
        return x;
    }
};

//O(n)
class Solution2 {
public:
    int romanToInt(string s) {
        int x = 0;
        map<char, int> roman;
        roman.insert({'I', 1});
        roman.insert({'V', 5});
        roman.insert({'X', 10});
        roman.insert({'L', 50});
        roman.insert({'C', 100});
        roman.insert({'D', 500});
        roman.insert({'M', 1000});
        
        for (int i = 0; i < s.length(); i++)
        {
            if (roman[s[i]] < roman[s[i+1]])
                x -= roman[s[i]];
            else
                x += roman[s[i]];
        }
        return x;
    }
};


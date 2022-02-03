//O(n)
class Solution {
public:
    bool checkString(string s) {
        bool check = false, find = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (check == true && s[i] == 'a')
            {
                check = false;
                break;
            }
            if (s[i] == 'b')
            {
                check = true;
                find = true;
            }   
        }
        if (!find) check = true;
        return check;
    }
};

//O(n)
class Solution1 {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int i = 0;
        if (digits[0] == 9)
        {
            while (i < digits.size())
            {
                if (digits[i] == 9)
                    digits[i] = 0;
                else
                {
                    digits[i]++;
                    break;
                }
                i++;
            }    
        }
        else
            digits[0]++;
        if (i == digits.size())
            digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};

//O(n)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size()-1; i >= 0; i--)
        {
            if (digits[i] == 9)
                digits[i] = 0;
            else
            {
                digits[i]++;
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};

//O(n)
class Solution1 {
public:
    string defangIPaddr(string address) {
        string s = "";
        for (char c: address)
        {
            if (c == '.')
                s += "[.]";
            else
                s += c;
        }
        return s;
    }
};

//O(n)
class Solution2 {
public:
    string defangIPaddr(string address) {
        return regex_replace(address, regex("[.]"), "[.]");
    }
};

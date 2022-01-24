//O(n)
class Solution1 {
public:
    int strStr(string haystack, string needle) {
        if (needle == "")
            return 0;
        if (needle.length() > haystack.length())
            return -1;
        int i = 0, k = 0;
        while (i < haystack.length() && k < needle.length())
        {
            if (haystack[i] == needle[k])
                k++;
            else
                if (k > 0) 
                {
                    i = i - k;
                    k = 0;
                }
            i++;
        }
        if (k != needle.length()) 
            return -1;
        return i - k;
    }
};

//O(n)
class Solution2 {
public:
    int strStr(string haystack, string needle) {
        auto i = haystack.find(needle);
        return i;
    }
};

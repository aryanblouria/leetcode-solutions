//O(nlog(n))
class Solution1 {
public:
    int lengthOfLongestSubstring(string s) {
        string sub = "";
        int length = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (find(sub.begin(), sub.end(), s[i]) != sub.end())
            {
                int n = sub.length();
                length = max(length, n);
                sub = "";
                i = i - n;
            }
            else
                sub += s[i];
        }
        length = max(length, (int)sub.length());
        return length;
    }
};

//O(n)
class Solution2 {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i = 0, j = 0, n = s.length(), ans = 0;
        
        while (i < n && j < n)
        {
            if (st.find(s[j]) == st.end())
            {
                st.insert(s[j++]);
                ans = max(ans, j - i);
            }
            else
                st.erase(s[i++]);
        }
        return ans;
    }
};

//O(n)
class Solution3 {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v (256, -1);
        int ans = 0, start = -1;
        for (int i = 0; i < s.length(); i++)
        {
            if (v[s[i]] > start)
                start = v[s[i]];
            v[s[i]] = i;
            ans = max(ans, i - start);
        }
        return ans;
    }
};

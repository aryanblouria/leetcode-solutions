//O(n)
class Solution1 {
public:
    string restoreString(string s, vector<int>& indices) {
        map<char, int> m;
        for (int i = 0; i < indices.size(); i++)
            m[indices[i]] = s[i];
        
        string ans = "";
        for (int i = 0; i < m.size(); i++)
            ans += m[i];
        return ans;
    }
};

//O(n)
class Solution2 {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans (indices.size(), ' ');
        for (int i = 0; i < indices.size(); i++)
            ans[indices[i]] = s[i];
        return ans;
    }
};

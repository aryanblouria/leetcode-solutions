//O(n)
class Solution1 {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> appears (26, false);
        for (char c: sentence)
            appears[c-97] = true;
        return find(appears.begin(), appears.end(), false) == appears.end();
    }
};

//O(nlog(n))
class Solution2 {
public:
    bool checkIfPangram(string sentence) {
        set<char> s;
        for (auto c: sentence)
            s.insert(c);
        return s.size() == 26;
    }
};


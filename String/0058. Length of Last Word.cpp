//O(n)
class Solution1 {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int flag = 0, n = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (flag == 0) continue;
                break;
            }
            else
            {
                n++;
                flag = 1;
            }     
        }
        return n;
    }
};

//O(n)
class Solution2 {
public:
    int lengthOfLastWord(string s) {
        stringstream ss (s);
        string word;
        vector<string> v;
        while (ss >> word)
            v.push_back(word);
        
        int n = v.size();
        return v[n-1].length();
    }
};

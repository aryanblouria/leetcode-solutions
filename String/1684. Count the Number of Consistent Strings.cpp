//O(l*m*n)
class Solution1 {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = words.size();
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].length(); j++)
            {
                if (allowed.find(words[i][j]) == string::npos)
                {
                    count--;
                    break;
                }   
            }
        }
        return count;
    }
};

//O(m*n)
class Solution2 {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        vector<bool> consistent (26, false);
        
        for (auto x: allowed)
            consistent[(int)x-65] = true;
        
        int count = 0;
        for (auto word: words)
        {
            for (auto ch: word)
            {
                if (!consistent[(int)ch-65])
                {
                    count++;
                    break;
                }
            }
        }
        return n - count;

    }
};

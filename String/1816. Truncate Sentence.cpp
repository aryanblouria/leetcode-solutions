//O(n)
class Solution1 {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int count = 0;
        for (char c: s)
        {
            if (c == ' ')
                count++;
            if (count == k)
                break;
            res += c;    
        }
        return res;
    }
};

//O(n)
class Solution2 {
public:
    string truncateSentence(string s, int k) {
        stringstream ss (s);
        string word, res = "";
        
        int count = 0;
        while (ss >> word)
        {
            res += word;
            count++;
            if (count == k) break;
            res += " ";
        }
        return res;
    }
};

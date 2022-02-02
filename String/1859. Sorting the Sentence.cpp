//O(n)
class Solution {
public:
    string sortSentence(string s) {
        map<char, string> m;
        stringstream ss (s);
        string word;
        while (ss >> word)
            m.insert({word[word.length()-1], word.substr(0, word.length()-1)});
        
        string res = "";
        for (auto x: m)
            res += x.second + " ";
        
        return res.substr(0, res.length()-1);
    }
};

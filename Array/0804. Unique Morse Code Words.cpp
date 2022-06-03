//O(n^m)
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> res = {};
        for (string word: words)
        {
            string s = "";
            for (char c: word)
            {
                s += v[c-97];
            }
            res.insert(s);
        }
        return res.size();
    }
};

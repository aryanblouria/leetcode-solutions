//O(n*m)
class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss (sentence);
        string word;
        
        vector<string> words;
        while (ss >> word)
            words.push_back(word);
        
        for (int i = 0; i < words.size(); i++)
        {
            char c = tolower(words[i][0]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                words[i] += "ma";
            else
                words[i] = words[i].substr(1, words[i].size()-1) + words[i][0] + "ma";
            for (int j = 0; j < i+1; j++)
                words[i] += 'a';
        }
        
        string res = "";
        for (string word: words)
            res += (word + " ");
        res = res.substr(0, res.size()-1);
        return res;
    }
};

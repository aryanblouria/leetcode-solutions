//O(n^2)
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxwords = 0;
        for (int i = 0; i < sentences.size(); i++)
            maxwords = max(maxwords, (int)count(sentences[i].begin(), sentences[i].end(), ' ') + 1);
        return maxwords;
    }
};

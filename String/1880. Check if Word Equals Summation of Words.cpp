//O(n)
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int first = 0, second = 0, target = 0;
        for (auto c: firstWord) 
            first = first * 10 + (c - 'a');
        for (auto c: secondWord) 
            second = second * 10 + (c - 'a');
        for (auto c: targetWord) 
            target = target * 10 + (c - 'a');
        return (first + second) == target;
    }
};

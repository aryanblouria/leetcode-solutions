//O(n)
class Solution1 {
public:
    bool areOccurrencesEqual(string s) {
       map<char, int> m;
       for (auto x: s)
           m[x]++;
        
       int count = m[s[0]];
       for (auto x: m)
       {
           if (x.second != count)
               return false;
       }
       return true;
    }
}; 

//O(n)
class Solution2 {
public:
    bool areOccurrencesEqual(string s) {
       vector<int> occurrences (26, 0);
       for (int i = 0; i < s.length(); i++)
            occurrences[s[i] - 97]++; 
        
       int v = -1;
       for (int i = 0; i < 26; i++)
       {
            if (occurrences[i] == 0)
                continue;
            else
            {
                if (v == -1)
                    v = occurrences[i];
                else
                {
                    if (occurrences[i] != v)
                        return false;
                }
            }
        }
        return true;
    }
}; 

//O(n)
class Solution1 {
public:
    string reverseWords(string s)     
    {
        stringstream ss (s);
        string word;
        
        string t = "";
        while (ss >> word)
            t = word + " " + t;
        return t.substr(0, t.length()-1);
    }
};

//O(n)
class Solution2 {
public:
    string reverseWords(string s)     {
        stringstream ss (s);
        string word;
        
        stack<string> st;
        string t = "";
        while (ss >> word)
            st.push(word);
        while (!st.empty())
        {
            t += st.top() + " ";
            st.pop();
        }
        return t.substr(0, t.length()-1);     
    }
};

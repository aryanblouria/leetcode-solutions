//O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c: s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
                continue;
            }       
            if (!st.empty())
            {
                if (c == ')' && st.top() == '(')
                    st.pop();
                else if (c == '}' && st.top() == '{')
                    st.pop();
                else if (c == ']' && st.top() == '[')
                    st.pop();
                else
                    st.push(c);
            } 
            else
                st.push(c);
        }
        return st.empty();
    }
};

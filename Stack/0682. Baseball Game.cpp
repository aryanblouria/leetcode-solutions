//O(n)
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C")
                st.pop();
            else if (ops[i] == "D")
                st.push(st.top() * 2);
            else if (ops[i] == "+")
            {
                int top = st.top();
                st.pop();
                int ntop = top + st.top();
                st.push(top);
                st.push(ntop);
            }
            else
                st.push(stoi(ops[i]));
        }
        
        int sum = 0;
        while (st.size() > 0)  
        {
            sum += st.top();
            st.pop();
        }    
        return sum;
    }
};

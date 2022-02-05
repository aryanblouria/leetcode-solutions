//O(n)
class Solution1 {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C")
                v.pop_back();
            else if (ops[i] == "D")
                v.push_back(v[v.size()-1]*2);
            else if (ops[i] == "+")
                v.push_back(v[v.size()-1] + v[v.size()-2]);
            else
                v.push_back(stoi(ops[i]));
        }
        return accumulate(v.begin(), v.end(), 0);
    }
};

//O(n)
class Solution2 {
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

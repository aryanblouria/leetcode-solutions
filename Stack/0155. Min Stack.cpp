class MinStack {
    stack<pair<int, int>> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        int mn = 0;
        if (s.empty())
            mn = val;
        else
            mn = min(s.top().second, val);
        s.push({val, mn});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};


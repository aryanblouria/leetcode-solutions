class MyQueue {
    stack<int> s1, s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while (!s1.empty())
        {
            int k = s1.top();
            s1.pop();
            s2.push(k);
        }
            
        s1.push(x);
        while (!s2.empty())
        {
            int k = s2.top();
            s2.pop();
            s1.push(k);
        }
    }
    
    int pop() {
        int x = s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        int x = s1.top();
        return x;
    }
    
    bool empty() {
        return s1.empty();
    }
};

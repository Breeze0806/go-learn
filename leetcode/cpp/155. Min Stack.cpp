class MinStack {
public:
    stack<int> sm;
    stack<int> s;
    void push(int x) {
        s.push(x);
        if(sm.empty() || (!sm.empty() && sm.top() >= x)) sm.push(x);
    }

    void pop() {
        if(s.top() == sm.top()) sm.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return sm.top();
    }
};
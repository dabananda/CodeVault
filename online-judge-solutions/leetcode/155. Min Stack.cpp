class MinStack {
    stack<long long> st;
    long long mini;

public:
    MinStack() {
        while (!st.empty()) {
            st.pop();
        }
        mini = LLONG_MAX;
    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            mini = val;
        } else if (val < mini) {
            st.push(val * 2LL - mini);
            mini = val;
        } else {
            st.push(val);
        }
    }

    void pop() {
        if (st.empty()) {
            return;
        }
        long long val = st.top();
        st.pop();
        if (val < mini) {
            mini = 2 * mini - val;
        }
    }

    int top() {
        if (st.empty()) {
            return -1;
        }
        long long val = st.top();
        if (val < mini) {
            return mini;
        }
        return val;
    }

    int getMin() { return mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
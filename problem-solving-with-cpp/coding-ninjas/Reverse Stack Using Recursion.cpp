#include <bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &s) {
    // Write your code here
    if (s.empty()) return;
    int val = s.top();
    s.pop();
    reverseStack(s);
    stack<int> st;
    while (!s.empty()) {
        st.push(s.top());
        s.pop();
    }
    st.push(val);
    while (!st.empty()) {
        s.push(st.top());
        st.pop();
    }
}
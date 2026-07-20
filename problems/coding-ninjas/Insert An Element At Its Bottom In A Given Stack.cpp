#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> st;
    while (!myStack.empty()) {
        st.push(myStack.top());
        myStack.pop();
    }
    st.push(x);
    while (!st.empty()) {
        myStack.push(st.top());
        st.pop();
    }
    return myStack;
}

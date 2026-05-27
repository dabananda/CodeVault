#include <bits/stdc++.h> 
int getSum(stack<int> st) {
    int sum = 0;
    while (!st.empty()) {
        sum = sum + st.top();
        st.pop();
    }
    return sum;
}
int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    // Write your code here
    int a = getSum(stk1);
    int b = getSum(stk2);
    int c = getSum(stk3);
    while (true) {
        if (a == b && a == c) break;
        if (a >= b && a >= c) {
            a = a - stk1.top();
            stk1.pop();
        } else if (b >= a && b >= c) {
            b = b - stk2.top();
            stk2.pop();
        } else {
            c = c - stk3.top();
            stk3.pop();
        }
    }
    return a;
}
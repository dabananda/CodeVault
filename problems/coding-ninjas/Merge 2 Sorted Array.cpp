/*
Author: Dabananda Mitra
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department: Computer Science and Engineering (CSE) (Session: 2019-2020)
University: Institute of Science Trade & Technology (ISTT)

Time complexity: O(n + m), where n and m are the lengths of input vectors a and b
Extra space complexity: O(n + m), due to the use of the set
Problem link: https://www.codingninjas.com/studio/problems/sorted-array_6613259

Time & Date: Monday, February 26, 2024 12:02 +06 (Dhaka time)
*/

#include <bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    set<int> st;
    for (int i = 0;i < a.size(); i++) {
        st.insert(a[i]);
    }
    for (int i = 0;i < b.size(); i++) {
        st.insert(b[i]);
    }
    vector<int> v;
    for (int i : st) {
        v.push_back(i);
    }
    return v;
}
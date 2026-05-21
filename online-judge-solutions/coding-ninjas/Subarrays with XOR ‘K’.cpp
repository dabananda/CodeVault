/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/subarrays-with-xor-k_6826258
// Time complexity: O(n)
// Space complexity: O(n)

#include <bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int xr = 0, cnt = 0, n = a.size();
    map<int, int> mpp;
    mpp[xr]++;
    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        int x = xr ^ b;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
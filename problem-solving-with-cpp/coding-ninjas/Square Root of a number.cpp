/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://www.codingninjas.com/studio/problems/square-root-integral_893351
// Time complexity: O(log n)
// Space complexity: O(1)

int floorSqrt(int n)
{
    long long l = 1, h = n, ans = 1;
    while (l <= h) {
        long long m = l + (h - l) / 2;
        if (m * m <= n) {
            ans = m;
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return h;
}

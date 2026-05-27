<<<<<<< HEAD
// Author: Dabananda Mitra
// Email: imdmitra@gmail.com
// Date: 11 February 2024, 09:09:00 (Bangladesh Time)
// LeetCode: https://leetcode.com/dabananda/
// Codeforces: https://codeforces.com/profile/dabananda
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Time complexity: O(n) - where n is the length of the input string 'address'
// Space complexity: O(n) - additional space used for the modified string
// Problem link: https://leetcode.com/problems/defanging-an-ip-address/

#include <string>

class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for (char c : address) {
            if (c == '.') {
                s += "[.]";
            } else {
                s += c;
            }
        }
        return s;
    }
};
=======
// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/problemset/problem/1783/A
// Time: O()
// Space: O()

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define em emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define nl "\n"
#define sort(v) sort(v.begin(), v.end())
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int n;
  cin >> n;
  vi v(n);
  for (auto& x: v) cin >> x;
  sort(v);
  if (v[0] == v[n - 1]) {
    cout << "NO\n";
  } else {
    cout << "YES\n" << v[n - 1] << " ";
    for (int i = 0; i < n - 1; i++) cout << v[i] << " ";
    cout << nl;
  }
}
 
int main() {
  Dabananda_Mitra;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  return 0;
}
>>>>>>> 450d91cd564812ddc4532b357768872ee482e7c6

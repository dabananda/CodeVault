// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link: https://codeforces.com/contest/1926/problem/C
// Time: O(n)
// Space: O(n)

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

int *arr = new int[1000000];

int sumOfDigits(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

void precompute() {
  int sum = 0;
  for (int i = 0; i <= 1000000; i++) {
    if (i >= 10) {
      sum = sum + sumOfDigits(i);
    } else {
      sum = sum + i;
    }
    arr[i] = sum;
  }
}

void solution() {
  int n;
  cin >> n;
  cout << arr[n] << nl;
}

int main() {
  Dabananda_Mitra;
  precompute();
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  delete (arr);
  return 0;
}
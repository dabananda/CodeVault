// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

string soroban[] = {
    "O-|-OOOO",
    "O-|O-OOO",
    "O-|OO-OO",
    "O-|OOO-O",
    "O-|OOOO-",
    "-O|-OOOO",
    "-O|O-OOO",
    "-O|OO-OO",
    "-O|OOO-O",
    "-O|OOOO-",
};

void solution() {
  int number;
  cin >> number;
  string n = to_string(number);
  int len = n.length();
  while (len--) {
    cout << soroban[n[len] - '0'] << endl;
  }
}

int main() {
  fastio;
  solution();
  return 0;
}
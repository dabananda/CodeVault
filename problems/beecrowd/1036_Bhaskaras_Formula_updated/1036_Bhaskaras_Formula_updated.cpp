#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, q, r1, r2;
  cin >> a >> b >> c;
  q = b * b - 4 * a * c;
  if (q > 0 && a != 0) {
    r1 = (-b + sqrt(q)) / (2 * a);
    r2 = (-b - sqrt(q)) / (2 * a);
    cout << fixed << setprecision(5);
    cout << "R1 = " << r1 << endl;
    cout << "R2 = " << r2 << endl;
  } else {
    cout << "Impossivel calcular" << endl;
  }
  return 0;
}
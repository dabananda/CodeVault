#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main() {
  double r;
  cin >> r;

  double pi_value = M_PI;
  double a = pi_value * (r * r);
  double c = 2 * pi_value * r;

  printf("%.6lf %.6lf\n", a, c);

  return 0;
}
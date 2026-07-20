#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << a / b << " ";
  cout << a % b << " ";
  
  double x = a, y = b;
  printf("%.5lf\n", x / y);

  return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double R;
  cin >> R;
  double result = 3.141592653 * (R * R);
  cout << setprecision(11) << result << endl;
  
  return 0;
}
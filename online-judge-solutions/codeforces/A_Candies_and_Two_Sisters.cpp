#include <iostream>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  for (long long int i = 0; i < n; i++) {
    long long int candies;
    cin >> candies;
    cout << candies - ((candies / 2) + 1) << endl;
  }

  return 0;
}
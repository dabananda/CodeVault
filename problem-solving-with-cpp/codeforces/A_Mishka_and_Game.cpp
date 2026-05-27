#include <iostream>

using namespace std;

int main() {
  int t, mishka = 0, chris = 0;
  cin >> t;
  while (t--) {
    int m, c;
    cin >> m >> c;
    if (m > c) mishka++;
    else if (m < c) chris++;
  }
  if (mishka > chris) cout << "Mishka" << endl;
  else if (mishka < chris) cout << "Chris" << endl;
  else cout << "Friendship is magic!^^" << endl;

  return 0;
}
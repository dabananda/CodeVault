#include <iostream>

using namespace std;

class Student {
  public:
  string nm, cls, s;
  int id;
};

int main() {
  int n;
  cin >> n;
  Student st[n];
  for (int i = 0; i < n; i++) {
    cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
  }
  int l = 0, r = n - 1;
  while (l < r) {
    swap(st[l].s, st[r].s);
    l++, r--;
  }
  for (int i = 0; i < n; i++) {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
  }

  return 0;
}
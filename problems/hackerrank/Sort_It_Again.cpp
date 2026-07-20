#include <iostream>

using namespace std;

class Student {
 public:
  string nm, cls, s;
  long long int id;
  int mm, em;
};

int main() {
  int n;
  cin >> n;
  Student st[n];
  for (int i = 0; i < n; i++) {
    cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].mm >> st[i].em;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (st[i].em < st[j].em) {
        swap(st[i], st[j]);
      }
      if (st[i].em == st[j].em) {
        if (st[i].mm < st[j].mm) {
          swap(st[i], st[j]);
        }
        if (st[i].mm == st[j].mm) {
          if (st[i].id > st[j].id) {
            swap(st[i], st[j]);
          }
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].mm << " " << st[i].em << endl;
  }

  return 0;
}
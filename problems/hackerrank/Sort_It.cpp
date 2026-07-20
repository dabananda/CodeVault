#include <iostream>

using namespace std;

class Student {
  public:
  string nm, cls, s;
  int id, mm, em, tm;
};

int main() {
  int n;
  cin >> n;
  Student st[n];
  for (int i = 0; i < n; i++) {
    cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].mm >> st[i].em;
    st[i].tm = st[i].mm + st[i].em;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (st[i].tm < st[j].tm) {
        swap(st[i], st[j]);
      }
      if (st[i].tm == st[j].tm) {
        if (st[i].id > st[j].id) {
          swap(st[i], st[j]);
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << st[i].nm << " " << st[i].cls << " " << st[i].s  << " "<< st[i].id << " " << st[i].mm << " " << st[i].em << endl;
  }

  return 0;
}
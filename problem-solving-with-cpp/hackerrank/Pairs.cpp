#include <bits/stdc++.h>

using namespace std;

class cmp {
 public:
  bool operator()(pair<string, int>& a, pair<string, int>& b) {
    if (a.first != b.first) {
      return a.first < b.first;
    }
    return a.second > b.second;
  }
};

int main() {
  int t;
  cin >> t;
  vector<pair<string, int>> v;
  for (int i = 0; i < t; i++) {
    string name;
    int id;
    cin >> name >> id;
    v.push_back({name, id});
  }
  sort(v.begin(), v.end(), cmp());
  for (auto i : v) {
    cout << i.first << " " << i.second << endl;
  }

  return 0;
}
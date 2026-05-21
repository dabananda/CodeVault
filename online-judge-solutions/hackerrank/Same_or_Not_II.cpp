/**
 * Title: Same or Not II
 * Link: https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges/same-or-not-4
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-07-13 16:40:06
 *
 */

#include <bits/stdc++.h>

using namespace std;

class Stack {
 public:
  list<int> l;

  void push(int val) {
    l.push_back(val);
  }

  void pop() {
    l.pop_back();
  }

  int top() {
    return l.back();
  }

  bool empty() {
    return l.size() == 0;
  }
};

class Queue {
 public:
  list<int> l;

  void push(int val) {
    l.push_back(val);
  }

  void pop() {
    l.pop_front();
  }

  int front() {
    return l.front();
  }

  bool empty() {
    return l.size() == 0;
  }
};

int main() {
  int n, m;
  cin >> n >> m;

  Stack s;
  Queue q;

  int val;
  for (int i = 0; i < n; i++) {
    cin >> val;
    s.push(val);
  }

  for (int i = 0; i < m; i++) {
    cin >> val;
    q.push(val);
  }

  bool flag = true;
  if (n != m) {
    cout << "NO\n";
  } else {
    while (!s.empty()) {
      if (s.top() != q.front()) {
        flag = false;
        break;
      }
      s.pop();
      q.pop();
    }
    flag ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}
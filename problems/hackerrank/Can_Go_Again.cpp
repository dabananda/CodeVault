/**
 * Title: Can Go Again
 * Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-05/challenges/can-go-again
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-13 13:53:32
 *
 */

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

class Edge {
 public:
  int a, b, weight;
  Edge(int a, int b, int weight) {
    this->a = a - 1;
    this->b = b - 1;
    this->weight = weight;
  }
};

int main() {
  int n, e;
  cin >> n >> e;
  vector<Edge> edgeList;
  for (int i = 0; i < e; i++) {
    int a, b, weight;
    cin >> a >> b >> weight;
    edgeList.push_back(Edge(a, b, weight));
  }
  int src;
  cin >> src;
  src--;
  ll dArr[n];
  fill(dArr, dArr + n, LLONG_MAX);
  dArr[src] = 0;
  for (int i = 1; i < n; i++) {
    for (Edge ed : edgeList) {
      int a = ed.a, b = ed.b, weight = ed.weight;
      if (dArr[a] != LLONG_MAX && dArr[a] + weight < dArr[b]) {
        dArr[b] = dArr[a] + weight;
      }
    }
  }
  bool flag = false;
  for (Edge ed : edgeList) {
    int a = ed.a, b = ed.b, weight = ed.weight;
    if (dArr[a] != LLONG_MAX && dArr[a] + weight < dArr[b]) {
      flag = true;
      break;
    }
  }
  if (flag) {
    cout << "Negative Cycle Detected" << endl;
  } else {
    int t;
    cin >> t;
    while (t--) {
      int d;
      cin >> d;
      d--;
      if (dArr[d] == LLONG_MAX) {
        cout << "Not Possible" << endl;
      } else {
        cout << dArr[d] << endl;
      }
    }
  }

  return 0;
}

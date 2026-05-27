#include <iostream>
#include <vector>

using namespace std;

void input(vector<int> &v, int n) {
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

vector<int> combine(vector<int> &A, vector<int> &B, int n) {
  vector<int> C(2 * n);
  for (int i = 0; i < n; i++) {
    C[i] = B[i];
    C[n + i] = A[i];
  }
  return C;
}

void print(vector<int> &v) {
  for (int i: v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> A(n), B(n);
  input(A, n);
  input(B, n);
  vector<int> C = combine(A, B, n);
  print(C);

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> vec, int key) {
  int begin = 0;
  int end = vec.size() - 1;
  int index = -1;
  while (begin <= end) {
    int mid = (begin + end) / 2;
    if (key == vec[mid]) {
      index = mid;
      end = mid - 1;
    } else if (key > vec[mid]) {
      begin = mid + 1;
    } else if (key < vec[mid]) {
      end = mid - 1;
    }
  }
  return begin;
}

int upperBound(vector<int> vec, int key) {
  int begin = 0;
  int end = vec.size() - 1;
  int index = -1;
  while (begin <= end) {
    int mid = (begin + end) / 2;
    if (key == vec[mid]) {
      index = mid;
      begin = mid + 1;
    } else if (key > vec[mid]) {
      begin = mid + 1;
    } else if (key < vec[mid]) {
      end = mid - 1;
    }
  }
  return begin;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n;
  vector<int> ladyChimp;
  for (int i = 0; i < n; i++) {
    cin >> x;
    ladyChimp.push_back(x);
  }
  int query;
  cin >> query;
  vector<int> luchu;
  for (int i = 0; i < query; i++) {
    cin >> x;
    luchu.push_back(x);
  }
  for (int i = 0; i < query; i++) {
    int lb = lowerBound(ladyChimp, luchu[i]);
    int ub = upperBound(ladyChimp, luchu[i]);
    // lb - 1 < 0 means not in the ladyChimp
    // ub >= n means not in the luchu
    if (lb - 1 < 0 && ub >= n) {
      cout << "X " << "X" << "\n";
    } else if (lb - 1 < 0) {
      cout << "X " << ladyChimp[ub] << "\n";
    } else if (ub >= n) {
      // lb - 1 because we have to chose the lowerbound
      cout << ladyChimp[lb - 1] << " X" << "\n";
    } else {
      cout << ladyChimp[lb - 1] << " " << ladyChimp[ub] << "\n";
    }
  }

  return 0;
}
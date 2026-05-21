#include <bits/stdc++.h>

int main() {
  int t;
  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::vector<std::vector<int>> a(4, std::vector<int>(2));

    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 2; k++) {
        std::cin >> a[j][k];
      }
    }

    std::vector<int> x;
    for (const auto& p : a) {
      x.push_back(p[0]);
    }

    int dx = *std::max_element(x.begin(), x.end()) - *std::min_element(x.begin(), x.end());
    std::cout << dx * dx << std::endl;
  }

  return 0;
}

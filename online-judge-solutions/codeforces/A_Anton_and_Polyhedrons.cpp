#include <iostream>
#include <string>

using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string polyhedron;
    cin >> polyhedron;
    if (polyhedron == "Tetrahedron") {
      count = count + 4;
    } else if (polyhedron == "Cube") {
      count = count + 6;
    } else if (polyhedron == "Octahedron") {
      count = count + 8;
    } else if (polyhedron == "Dodecahedron") {
      count = count + 12;
    } else if (polyhedron == "Icosahedron") {
      count = count + 20;
    }
  }
  
  cout << count << endl;

  return 0;
}
#include <bits/stdc++.h>

using namespace std;

void trim(char s[], char newString[], int n) {
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != ' ') {
      newString[j] = s[i];
      j++;
    }
  }
  newString[j] = '\0';
}

int main() {
  char s[100001];
  while (cin.getline(s, 100001)) {
    int n = strlen(s);
    char newString[n + 1];
    trim(s, newString, n);
    n = strlen(newString);
    sort(newString, newString + n);
    cout << newString << endl;
  }

  return 0;
}
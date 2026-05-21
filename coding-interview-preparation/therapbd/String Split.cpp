/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 15:03:09
Date          : 2026-02-14
*/

/*
Problem: Split String by Hyphen

You are given a string "str" that may contain multiple words separated by
hyphens (-).

Your task is to:
* Read the entire line of input.
* Split the string using the hyphen (-) as a delimiter.
* Print each separated word on a new line in the same order as they appear.

Input:
A single line string "str" that may contain one or more words separated by
hyphens (-).
* The string may contain spaces.
* The string may contain multiple hyphens.
* The string may also contain consecutive hyphens.

Output:
Print each substring (separated by -) on a new line.

Examples:

Example 1:
Input: Ka-12-3456
Output:
Ka
12
3456

Example 2:
Input: apple-banana-mango
Output:
apple
banana
mango

Example 3:
Input: one--two
Output:
one

two
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string temp = "";

  for (char c : s) {
    if (c == '-') {
      cout << temp << endl;
      temp = "";
    } else {
      temp += c;
    }
  }

  cout << temp << endl;
}

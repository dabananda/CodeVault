#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cout << #x << " " << x << endl;

void Solution(int t) {
	string s1, s2;
	cin >> s1 >> s2;
	// s - m - l
	int s1_last_index, s2_last_index;
	s1_last_index = s1.length() - 1;
	s2_last_index = s2.length() - 1;
	char c1, c2;
	c1 = s1[s1_last_index];
	c2 = s2[s2_last_index];
	if (c1 == c2) {
		if (s1.length() == s2.length()) {
			cout << "=\n";
		} else if (s1.length() > s2.length()) {
			if (c1 == 'S') {
				cout << "<\n";
			} else {
				cout << ">\n";
			}
		} else {
			if (c1 == 'S') {
				cout << ">\n";
			} else {
				cout << "<\n";
			}
		}
	} else {
		if (c1 < c2) {
			cout << ">\n";
		} else if (c1 > c2) {
			cout << "<\n";
		} else {
			cout << "=\n";
		}
	}
}

int main() {
	TLE;
	int test_case, t = 1;
	cin >> test_case;
	while (test_case--) {
		Solution(t++);
	}

	return 0;
}

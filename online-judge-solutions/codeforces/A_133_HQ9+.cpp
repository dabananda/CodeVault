#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cout << #x << " " << x << endl;

void Solution() {
	string s;
	cin >> s;
	bool flag = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
}

int main() {
	TLE;
	Solution();

	return 0;
}

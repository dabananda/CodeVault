#include <iostream>

using namespace std;

typedef long long ll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution() {
	ll n, k;
	cin >> n >> k;
	if (n % 2 != 0) {
		if (k <= (n / 2) + 1) {
			cout << 2 * k - 1 << endl;
		} else {
			k = k - (n / 2) - 1;
			cout << 2 * k << endl;
		}
	} else {
		if (k <= n / 2) {
			cout << 2 * k - 1 << endl;
		} else {
			k = k - (n / 2);
			cout << 2 * k << endl;
		}
	}
}

int main() {
	TLE;
	Solution();

	return 0;
}

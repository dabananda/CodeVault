#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int sumOfEven = 0, sumOfOdd = 0;

	while (n != 0) {
		int x = n % 10;
		if (x % 2 == 0) {
			sumOfEven += x;
		} else {
			sumOfOdd += x;
		}
		n = n / 10;
	}

	cout << sumOfEven << " " << sumOfOdd << endl;

	return 0;
}

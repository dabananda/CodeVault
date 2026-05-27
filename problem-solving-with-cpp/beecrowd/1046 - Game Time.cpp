#include <iostream>
using namespace std;

void calculation(int x, int y)
{
	int result;
	if (x > 12)
	{
		result = (24 - x) + y;
		cout << "O JAGO DUROU " << result << " HORA(S)" << endl;
	}
	else if (x < y)
	{
		cout << "O JAGO DUROU " << y - x << " HORA(S)" << endl;
	}
	else
	{
		result = 24;
		cout << "O JAGO DUROU " << result << " HORA(S)" << endl;
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	calculation(a, b);

	return 0;
}
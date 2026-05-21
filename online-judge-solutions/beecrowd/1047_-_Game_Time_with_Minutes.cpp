#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int ih, im, fh, fm;
	cin >> ih >> im >> fh >> fm;
	int rh, rm;
	if (ih == im && im == fh && fh == fm)
	{
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
	}
	else
	{
		if (ih == fh && im > fm)
		{
			int n = im - fm;
			int m = 60 - n;
			cout << "O JOGO DUROU " << 23 << " HORA(S) E " << m << " MINUTO(S)" << endl;
		}
		else if (ih > fh && im > fm)
		{
			cout << "O JOGO DUROU " << (24 - ih) + (fh - 1) << " HORA(S) E " << 60 - (im - fm) << " MINUTO(S)" << endl;
		}
		else
		{
			int min = abs((ih * 60 + im) - (fh * 60 + fm));
			int hour = min / 60;
			int minutes = min - (hour * 60);
			cout << "O JOGO DUROU " << hour << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
		}
	}

	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int d1, h1, m1, sec1, d2, h2, m2, sec2;
    string day1, day2, s1, s2, s3, s4;
    cin >> day1 >> d1 >> h1 >> s1 >> m1 >> s2 >> sec1;
    cin >> day2 >> d2 >> h2 >> s3 >> m2 >> s4 >> sec2;
    int t1 = (d1 * 24 * 60 * 60) + (h1 * 60 * 60) + (m1 * 60) + sec1;
    int t2 = (d2 * 24 * 60 * 60) + (h2 * 60 * 60) + (m2 * 60) + sec2;
    int x = t2 - t1;
    int days = x / 86400;
    int y = x - (days * 86400);
    int hours = y / 3600;
    int z = y - (hours * 3600);
    int minutes = z / 60;
    int seconds = z - (minutes * 60);
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}

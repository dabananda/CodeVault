#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[110], song[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia",  "Happy", "birthday", "to", "you"};
    int n, j = 0, k = 0, m = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    if (n > 16)
    {
        m = (n / 16) + 1;
    }
    int x = m * 16;
    for (int i = 0; i < x; i++, j++, k++)
    {
        if (j == n)
        {
            j = 0;
        }
        if (k == 16)
        {
            k = 0;
        }
        cout << name[j] << ": " << song[k] << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int clouds[n];

    for (int i = 0; i < n; i++)
    {
        cin >> clouds[i];
    }

    int CurrentClouds = 0;
    int energy = 100;

    do
    {
        CurrentClouds = ((CurrentClouds + k) % n);
        energy--;

        if (clouds[CurrentClouds] == 1)
        {
            energy = energy - 2;
        }

    } while (CurrentClouds % n != 0);

    cout << energy << endl;

    return 0;
}

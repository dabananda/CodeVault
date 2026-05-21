#include <stdio.h>

int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int clouds[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &clouds[i]);
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

    }
    while (CurrentClouds % n != 0);

    printf("%d\n", energy);

    return 0;
}

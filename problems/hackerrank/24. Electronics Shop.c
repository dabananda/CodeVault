#include <stdio.h>
int main()
{
    int b, m, n, max = -1, i, j;
    scanf("%d %d %d", &b, &m, &n);
    int keyboard[m], usb[n];
    for (i = 0; i < m; i++) scanf("%d", &keyboard[i]);
    for (i = 0; i < n; i++) scanf("%d", &usb[i]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (keyboard[i] + usb[j] <= b)
            {
                if (keyboard[i] + usb[j] >= max) max = keyboard[i] + usb[j];
            }
        }
    }
    printf("%d\n", max);
    return 0;
}

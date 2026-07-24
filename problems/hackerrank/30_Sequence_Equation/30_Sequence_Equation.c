#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n], x[n];
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    for (int i = 0; i < n; i++)
    {
        x[i] = i + 1;
        for (int j = 0; j < n; j++)
        {
            if (x[i] == array[j])
            {
                for (int k = 0; k < n; k++)
                {
                    if ((j + 1) == array[k]) printf("%d\n", (k + 1));
                }
            }
        }
    }
    return 0;
}

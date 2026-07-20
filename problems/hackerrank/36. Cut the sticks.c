#include <stdio.h>
int main()
{
    int n, temp, count;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) scanf("%d", &array[i]);
    printf("%d\n", n);
sort:
    for (int i = 0; i < n; i++)
    {
        if (array[i] > temp) temp = array[i];
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < temp && array[i] > 0) temp = array[i];
    }
    for(int i = 0; i < n; i++)
    {
        array[i] = array[i] - temp;
        if (array[i] > 0) count++;
    }
    if (count != 0) printf("%d\n", count);
    if (count >= 2) goto sort;
    return 0;
}

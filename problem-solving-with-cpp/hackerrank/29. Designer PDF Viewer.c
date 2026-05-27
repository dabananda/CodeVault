#include <stdio.h>
int main()
{
    int ar[26];
    int i, max = 0, length = 0, y;
    for (i = 0; i < 26; i++) scanf("%d", &ar[i]);
    char ch[11];
    for (i = 0; i < 11; i++)
    {
        ch[i] = getchar();
        y = ch[i] - 97;
        if (ar[y] > max) max = ar[y];
    }
    for (i = 0; i < 11; i++)
    {
        if(ch[i] >= 97 && ch[i] <= 122) length = length + 1;
    }
    printf("%d\n", max * length);
    return 0;
}

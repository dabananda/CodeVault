#include <stdio.h>
#include <string.h>

int main()
{
    char sentense[100000];
    int count = 1;
    scanf("%s", sentense);
    int n = strlen(sentense);
    for (int i = 0; i <= n; i++)
    {
        if (sentense[i] >= 65 && sentense[i] <= 90)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}

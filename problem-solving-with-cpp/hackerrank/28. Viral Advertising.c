#include <stdio.h>
int main()
{
    int d, shared = 5, liked = 2, cumulative = 2;
    scanf("%d", &d);
    for (int i = 2; i <= d; i++)
    {
        shared = (shared / 2) * 3;
        liked = shared / 2;
        cumulative = cumulative + liked;
    }
    printf("%d\n", cumulative);
    return 0;
}

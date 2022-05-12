#include <stdio.h>
int main()
{

    int n, i, a;
    int min = 100000;
    int max = -100000;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a < min)

            min = a;
        if (a > max)
            max = a;
    }
    printf("%d\n", min * max);
}
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    char a[n];

    scanf("%s", &a);
    for (i = 0; i < n; i++)
    {
        sum += a[i] - '0';
    }

    printf("%d\n", sum);
}
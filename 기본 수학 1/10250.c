#include <stdio.h>
int main()
{
    int h, w, n, t, i;
    int a, b;

    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d%d", &h, &w, &n);
        if (n % h == 0)
        {
            a = h;
            b = n / h;
        }
        else
        {
            a = n % h;
            b = (n / h) + 1;
        }

        printf("%d%02d\n", a, b);
    }
}
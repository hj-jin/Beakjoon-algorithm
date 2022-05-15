#include <stdio.h>
#include <string.h>
main()
{
    int n, i, k, cnt = 0, sum = 0;
    char s[81];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", s);
        for (k = 0; k < strlen(s); k++)
        {
            if (s[k] == 'O')
            {
                cnt++;
                sum += cnt;
            }
            else // if (s[k] == 'X')
            {
                cnt = 0;
            }
        }
        printf("%d\n", sum);
        sum = 0;
        cnt = 0;
    }
}
#include <stdio.h>
#include <string.h>
main()
{

    char s[51];

    int i, n, k;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        scanf("%s", s);

        printf("String #%d\n", i);

        for (k = 0; k < strlen(s); k++)
        {

            if (s[k] != 'Z')

                printf("%c", s[k] + 1);

            else

                printf("A");
        }
        printf("\n\n");
    }
}
#include <stdio.h>

 main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d", a);

        c = a + b;
        a = b;
        b = c;

        if (i < n)
        {
            printf(", ");
        }
    }

}
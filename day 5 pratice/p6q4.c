#include <stdio.h>

main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        if (n % 2 != 0)
        {
            printf("%d ", n);
        }
        n--;
    }

    // int n;
    // printf("Enter any number");
    // scanf("%d", &n);

    // for (n; n >= 1; n--)
    // {
    //     if (n % 2 != 0)
    //     {
    //         printf("%d\n", n);
    //     }
    // }
}
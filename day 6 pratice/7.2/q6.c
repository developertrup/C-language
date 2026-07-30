#include <stdio.h>

main()
{
    int i, s, j;

    for (i = 5; i >= 1; i--)
    {
        // Print spaces
        for (s = 5; s > i; s--)
        {
            printf("  ");
        }

        // Print numbers
        for (j = 5; j >= 6 - i; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}

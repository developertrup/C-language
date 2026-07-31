#include <stdio.h>

main()
{

    int i, j;

    for (i = 41; i <= 45; i++) // true
    {
        for (j = 41; j <= i; j++) // 41 <=41 true
        {
            printf("%d ", j); // 41
        }
        printf("\n");
    }
}
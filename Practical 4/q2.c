#include <stdio.h>

main()
{

    int i, j, count = 11;

    for (i = 1; i <= 4; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", count);
            ++count; 
        }
        printf("\n");
    }
}
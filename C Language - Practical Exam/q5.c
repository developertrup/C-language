#include <stdio.h>

 main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", (11-i)*(11-i));
        }
        printf("\n");
    }

}
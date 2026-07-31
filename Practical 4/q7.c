#include <stdio.h>

main()
{

    int i, j;

    for (i = 1; i <= 5; i++) //1<=5 true
    {
        for (j = 1; j <= 5; j++) // 1<=5 true 
        {
            if (i == 1 || i == 3 || j == 1 || (i == 2 && j == 5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
#include <stdio.h>

main()
{

    int i, j, s;

    for (i = 5; i >= 1; i--) // 5>=1 true
    {
        for (s = 5; s > i; s--) // 5>5 false
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // 1 <=5
        {
            printf("%d", j % 2); // 1%2 = 1 // 2%2=0
        }
        printf("\n");
    }
}
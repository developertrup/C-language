#include <stdio.h>

main()
{

    int i, j, s;

    for (i = 5; i >= 1; i--) // 5>=1 true
    {
        for (s = i; s > 1; s--) // 5>1 true
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++) //5<=5 true
        {
            printf("%d", j);// 5
        }
        printf("\n");
    }
}
#include <stdio.h>

main()
{

    int i, j, s;

    for (i = 5; i >= 1; i--) //5>=1 true
    {
        for (s = i; s > 1; s--) // 1>1
        {
            printf(" ");//    
        }
        for (j = i; j <= 5; j++) //6<=5
        {
            printf("%d", j);//5
        }
        for (j = 4; j >= i; j--)//4>=5
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
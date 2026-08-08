#include <stdio.h>
 main()
{
    int a[5], i;
    int *p;

    p = a;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }

    printf("Square of each element:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", (*(p + i)) * (*(p + i)));
    }

}
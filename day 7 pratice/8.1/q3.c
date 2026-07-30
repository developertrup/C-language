#include <stdio.h>
main()
{
    int i;
    int size;
    printf("Enter Element Size=");
    scanf("%d", &size);
    int a[size];
    int b[size];
    int c[size];

    for (i = 0; i < size; i++)
    {
        printf("a[%d]=", i + 1);
        scanf("%d", &a[i]);
    }
    printf("array A  saved\n");
    for (i = 0; i < size; i++)
    {
        printf("b[%d]=", i + 1);
        scanf("%d", &b[i]);
    }
    printf("array B saved\n");
    for (i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < size; i++)
    {
        printf("c[%d] = %d\n", i + 1, c[i]);
    }
}
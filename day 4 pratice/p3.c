#include <stdio.h>
main()
{
    int a, b, c, min;
    printf("enter value of A:");
    scanf("%d", &a);
    printf("enter value of b:");
    scanf("%d", &b);
    printf("enter value of c:");
    scanf("%d", &c);

    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("min value is%d", min);
}

#include <stdio.h>
main()
{
    int x, y, result;

    printf("Enter x");
    scanf("%d", &x);

    printf("Enter y");
    scanf("%d", &y);

    result = (x + y) * (x + y)*(x+y);

    printf("Your Result is =%d", result);
}
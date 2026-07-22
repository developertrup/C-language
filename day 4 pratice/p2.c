#include <stdio.h>
main()
{
    int a, b, c, d;

    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d", &c);
    printf("enter d:");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("max value %d", a);
            }
            else
            {
                printf("max value %d", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("max value %d", c);
            }
            else
            {
                printf("max value %d", d);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("max %d", b);
            }
            else
            {
                printf("max value is%d", d);
            }
        }
        else
        {
            if (c > d)
            {
                print("max value %d", c);
            }
            else
            {
                print("max value%d", d);
            }
        }
    }
}
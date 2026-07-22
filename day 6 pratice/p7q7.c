#include <stdio.h>
main()
{
    char a, b;

    for (a = 'a'; a <= 'e'; a++)
    {
        for (b = 'a'; b <= a; b++)
        {
            printf("%c ", b);
        }
        printf("\n");
    }
}
#include <stdio.h>

 main()
{
    int n, first, last, sum;

    printf("Enter any number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    first = n;

    
    sum = first + last;

    printf("The sum of the first and last digit: %d", sum);

}
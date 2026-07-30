#include <stdio.h>

 main()
{
    int n, first, last, sum;

    printf("Enter any number: ");
    scanf("%d", &n);

    last = n % 10; // 384 % 10 =4

    while (n >= 10) // 384 True //38 True //3 False
    {
        n = n / 10;  // 384 /10 = 38.4 // 38 /10 = 3.8
    }

    first = n; // 3

    
    sum = first + last; //3+4 =7

    printf("The sum of the first and last digit: %d", sum);

}
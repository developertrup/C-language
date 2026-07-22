#include <stdio.h>

main()
{
    int first, second;

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    printf("Leap years are:\n");

    while (first <= second)
    {
        if ((first % 400 == 0) || (first % 4 == 0 && first % 100 != 0))
        {
            printf("%d ", first);
        }
        first++;
    }  

    // int first, second;
    // printf("Enter first number");
    // scanf("%d", &first);
    // printf("Enter second number");
    // scanf("%d", &second);
    // printf("Leap Years are:");
    // for (; first <= second;first++)
    // {
    //     if ((first % 400 == 0) || (first % 4 == 0 && first % 100 != 0))
    //     {
    //         printf("%d ", first);
            
    //     }
    // }
}
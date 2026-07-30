#include <stdio.h>

main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];
    int even = 0, odd = 0;

    for (i = 0; i < n; i++)
    {   
        printf("Enter current Element %d, Total elements %d,: ",i, n);
        scanf("%d", &array[i]);

        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d\n", odd);
}
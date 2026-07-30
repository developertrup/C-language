#include <stdio.h>
 main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Reverse Output:\n");
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

}
#include <stdio.h>

main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int largest = array[0];
    int secondLargest = array[0];

    for(i = 1; i < n; i++)
    {
        if(array[i] > largest)
        {
            largest = array[i];
        }
    }
    for(i = 0; i < n; i++)
    {
        if(array[i] > secondLargest && array[i] < largest)
        {
            secondLargest = array[i];
        }
    }

    printf("Second Largest = %d\n", secondLargest);

}
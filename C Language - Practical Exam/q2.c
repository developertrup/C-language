#include <stdio.h>

main()
{
    int arr[100], n, i, smallest=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
        printf("Enter %d elements:\n", i);
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Smallest element = %d\n", smallest);

}
#include <stdio.h>

main()
{
    int size, i;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Length of an Array: %d", size);

}
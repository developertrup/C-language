#include <stdio.h>

 main()
{
    int size, i, sum = 0;
    float average;

    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements:\n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);

        sum = sum + array[i];
    }

    average = (float)sum / size;

    printf("Sum = %d\n", sum);
    printf("Average = %.1f", average);

}
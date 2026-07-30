#include <stdio.h>
main()
{
    int n, i;
    printf("Enter element value");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d value", i);
        scanf("%d", &array[i]);
    }
    int max = array[0];
    int min = array[0];

    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}
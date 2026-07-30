#include <stdio.h>
main()
{
    int size, i;
    printf("Enter size");
    scanf("%d", &size);
    int a[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d", a[i]);
        }
    }
}
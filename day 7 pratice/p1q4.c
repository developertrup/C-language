#include <stdio.h>

main()
{
    int n, i, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n]; 

    for (i = 0; i < n; i++)
    {    
        printf("Enter current Element %d, Total elements %d,: ",i+1, n);
        scanf("%d", &array[i]);
    }

    printf("Search Element: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (array[i] == search)
        {
            printf("Element Found at Position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element Not Found\n");
    }
}
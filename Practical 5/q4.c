#include <stdio.h>

 main()
{
    int num;
    int i, j;
    int r, c;

    printf("Enter Row Size: ");
    scanf("%d", &r);

    printf("Enter Cols Size: ");
    scanf("%d", &c);

    int array[r][c];


    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Enter Row Number: ");
    scanf("%d", &num);

    for(j = 0; j < c; j++)
    {
        printf("%d ", array[num][j]);
    }
}
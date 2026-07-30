#include <stdio.h>

 main()
{
    int a[10][10];
    int row, col;
    int i, j;
    int sum = 0;

    printf("Enter the array's row & column size: ");
    scanf("%d", &row);
    col = row;

    printf("\nEnter array's elements:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        sum = sum + a[i][row - 1 - i];
    }

    printf("\nThe sum of anti-diagonal elements of an Array: %d", sum);
}  
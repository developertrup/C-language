#include <stdio.h>

 main()
{
    int r, c;
    int i, j;
    int row, column;
    int rowSum = 0, columnSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int array[r][c];

    printf("\nEnter array's elements:\n");


    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);


    for (j = 0; j < c; j++)
    {
        printf("%d, ", array[row][j]);
        rowSum = rowSum + array[row][j];
    }

    printf("\nThe sum of a row %d: %d\n", row, rowSum);

    printf("\nEnter column number: ");
    scanf("%d", &column);

    printf("Elements of column %d: ", column);

    for (i = 0; i < r; i++)
    {
        printf("%d, ", array[i][column]);
        columnSum = columnSum + array[i][column];
    }

    printf("\nThe sum of column %d: %d", column, columnSum);
}
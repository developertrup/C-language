#include <stdio.h>
 main()
{
    int a[10][10];
    int row, col;
    int i, j;
    int sum = 0;
    float average;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    printf("\nEnter array's elements:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);

            sum = sum + a[i][j];
        }
    }

    average = (float)sum / (row * col);

    printf("\nAverage of an Array: %.2f", average);
}
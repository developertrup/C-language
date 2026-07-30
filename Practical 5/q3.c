#include <stdio.h>
main()
{
    int i, j;
    int r, c;
    printf("Enter Row");
    scanf("%d", &r);
    printf("Enter cols");
    scanf("%d", &c);

    int array[r][c];
    for(i=0;i<r;i++)
    {
       for (j=0; j<c; j++)
       {
         printf("a[%d]",i);
         scanf("%d",&array[i][j]);
       } 
    }
     for(i=0;i<c;i++)
    {
       for (j=0; j<r; j++)
       {
          printf("%d ",array[j][i]);
       } 
       printf("\n");
    }

}
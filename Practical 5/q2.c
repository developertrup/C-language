#include <stdio.h>
main()
{
    int r,c;
    int i,j;
    printf("Enter Row Size ");
    scanf("%d",&r);
    printf("Enter Cols Size ");
    scanf("%d",&c);
    int array[r][c];

    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          printf("array[%d]",i);
          scanf("%d",&array[i][j]);
       }
    }
    int max=array[0][0];
     for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          if(array[i][j]>max)
          {
            max=array[i][j];
          }
       }
    }
    printf("Largest number %d",max);

}
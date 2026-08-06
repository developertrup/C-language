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
          printf("array[%d][%d]",i,j);
          scanf("%d",&array[i][j]);
       }
    }
    int max=array[0][0];
     for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          if(array[i][j]>max) // 2 >1 // 3>2 // 4>3 
          {
            max=array[i][j];
          }
       }
    }
    printf("Largest number %d",max);

}
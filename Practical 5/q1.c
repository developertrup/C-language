#include <stdio.h>
main()
{
    int i,  size;
    printf("Enter Element size");
    scanf("%d", &size);
    int array[size];

    for(i=0;i<size;i++) // 4
    {
       printf("a[%d]",i); // a[0]
       scanf("%d",&array[i]);//5  
    }
    printf("Negative Number =");
    for(i=0;i<size;i++)
    {
        if(array[i]<0)
        {
            printf("%d ",array[i]);
        }
    }
}
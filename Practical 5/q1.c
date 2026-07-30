#include <stdio.h>
main()
{
    int i,  size;
    printf("Enter Element size");
    scanf("%d", &size);
    int array[size];

    for(i=0;i<size;i++)
    {
       printf("a[%d]",i);
       scanf("%d",&array[i]);
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
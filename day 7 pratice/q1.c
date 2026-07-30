#include <stdio.h>
main()
{
    int size,i,sum=0;
    printf("Enter size");
    scanf("%d",&size);
    int a[size];

    for(i=0;i<size;i++){
        printf("Enter element");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        printf("%d\n",a[i]);
        sum=sum+a[i];
    }
   printf("%d",sum);
}
#include <stdio.h>
 main()
{
    int a, b;

    printf("enter value of A:");
    scanf("%d", &a);

    printf("enter value of B:");
    scanf("%d",&b);

    printf("Addition of %d and %d is %d\n",a,b,a+b);
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
    printf("Multiplication od %d and %d is %d\n",a*b);
    printf("Division of %d is %d is %d\n",a,b,a/b);
    printf("Modulo of %d and %d is %d\n",a,b,a%b);
  
}
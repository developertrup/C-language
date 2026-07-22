#include <stdio.h>
main(){
    int a;

    printf("enter number");
    scanf("%d",&a);
   
    if(a>0){
 printf("this is positive number");
    }

    else if (a<0)
    {
       printf("this is negative number");
    }

    else{
        printf("this is zero");
    }
}
#include <stdio.h>
#define  pi  3.14
main(){

    float r, perimeter;
    printf("Enter Radius");
    scanf("%f", &r);
    perimeter = 2*pi*r;

    printf("Perimeter of Circle = %.2f",perimeter);
}
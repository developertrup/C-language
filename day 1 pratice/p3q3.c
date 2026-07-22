#include <stdio.h>

 main()
{
    float angle1, angle2, angle3;

    printf("Enter First Angle: ");
    scanf("%f", &angle1);

    printf("Enter Second Angle: ");
    scanf("%f", &angle2);

    angle3 = 180 -(angle1 + angle2) ;

    printf("Third Angle: %.0f", angle3);

}
#include <stdio.h>

 main()
{
    float c, f;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c);

    f = 9.0 / 5.0 * c + 32;

    printf("Temperature in Fahrenheit = %.2f", f);

}
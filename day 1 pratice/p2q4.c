#include <stdio.h>
main()
{
    float p, r, n, si;

    printf("Enter Principal Amount:");
    scanf("%f", &p);
    printf("Enter rate of intrest:");
    scanf("%f", &r);
    printf("Enter Time (in months):");
    scanf("%f", &n);

    si = p * r * n / 100;
    printf("simple intrest of =%.2f", si);
}
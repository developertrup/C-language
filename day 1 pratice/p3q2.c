#include <stdio.h>

main()
{
    float base, hra_percent, da_percent, ta_percent;
    float hra, da, ta, gross;

    printf("Enter Base Salary: ");
    scanf("%f", &base);

    printf("Enter HRA Percentage: ");
    scanf("%f", &hra_percent);

    printf("Enter DA Percentage: ");
    scanf("%f", &da_percent);

    printf("Enter TA Percentage: ");
    scanf("%f", &ta_percent);

    hra = base * hra_percent / 100;
    da = base * da_percent / 100;
    ta = base * ta_percent / 100;

    gross = base + hra + da + ta;

    printf("Gross Salary: Rs. %.0f", gross);

}
#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, average;

    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    average = (sub1 + sub2 + sub3) / 3;

    printf("\nAverage Marks = %.2f", average);

    return 0;
}
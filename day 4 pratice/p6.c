#include <stdio.h>

 main()
{
    int score;
    char grade;

    printf("Enter your score under 100: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    printf("Your grade is %c", grade);


}
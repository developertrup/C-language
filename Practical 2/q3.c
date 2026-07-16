#include <stdio.h>

main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
            grade = 'A';
        else if (score >= 80)
            grade = 'B';
        else if (score >= 70)
            grade = 'C';
        else if (score >= 60)
            grade = 'D';
        else
            grade = 'F';

        printf("Your grade is %c.\n", grade);

        switch (grade)
        {
            case 'A':
                printf("Excellent work!\n");
                break;

            case 'B':
                printf("Well done.\n");
                break;

            case 'C':
                printf("Good job.\n");
                break;

            case 'D':
                printf("You passed, but you could do better.\n");
                break;

            case 'F':
                printf("Sorry, you failed.\n");
                break;
        }
        if (grade >= 'A' && grade <= 'D')
        {
            printf("Congratulations! You are eligible for the next level.\n");
        }
        else
        {
            printf("Please try again next time.\n");
        }
    }
    else
    {
        printf("Please enter a valid score between 0 and 100.\n");
    }
}

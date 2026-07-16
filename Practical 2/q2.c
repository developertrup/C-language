#include <stdio.h>
main()
{
    int score;
    char grade;

    printf("Enter Your Score:\n");
    scanf("%d", &score);

    if (score <= 100)
    {
        if (score >= 90)
        {
            grade = 'A';
        }
        else if (score >= 80)
        {
            grade = 'A';
        }
        else if (score >= 70)
        {
            grade = 'C';
        }
        else if (score >= 60)
        {
            grade = 'D';
        }
        else
        {
        }
        printf("Your Grade is %c\t", grade);
    }
    else
    {
        printf("please enter valid score under 100 ");
    }
    switch (grade)
    {
    case 'A':
    {
        printf("Execllent Work");
    }
    break;
    case 'B':
    {
        printf("Well Done");
    }
    break;
    case 'C':
    {
        printf("Good Job");
    }
    break;
    case 'D':
    {
        printf("you passed");
    }
    break;
    case 'F':
    {
        printf("Sorry ! You Failed");
    }
    break;
    }
}

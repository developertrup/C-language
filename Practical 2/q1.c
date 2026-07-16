#include <stdio.h>
main()
{
    int score;
    char grade;

    printf("Enter Your score");
    scanf("%d", &score);

    if (score <= 100)
    {
        if (score >= 90)
        {
            printf("Your Grade is A");
        }
        else if (score >= 80)
        {
            printf("Your Grade B");
        }
        else if (score >= 70)
            printf("Your Grade is C");

        else if (score >= 60)
        {
            printf("Your Grade is D");
        }
        else
        {
            printf("Soory please re-exam Your Result Fail");
        }
    }
    else{
        printf("invalid score please enter under 100");
    }
}
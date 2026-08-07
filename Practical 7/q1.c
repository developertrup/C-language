#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

 main()
{
    int choice, a, b;

    while (1)
    {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for the exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("\nExiting the program...");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a); // 1

        printf("Enter the second number: ");
        scanf("%d", &b); // 1

        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d is %d\n",a, b, add(a, b)); // 1 // 1 (2)
            break;

        case 2:
            printf("Subtraction of %d and %d is %d\n",a, b, sub(a, b));
            break;

        case 3:
            printf("Multiplication of %d and %d is %d\n",a, b, mul(a, b));
            break;

        case 4:
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("Division of %d and %d is %d\n", a, b, divi(a, b));
            break;

        case 5:
            if (b == 0)
                printf("Cannot find modulus with zero\n");
            else
                printf("Modulus of %d and %d is %d\n", a, b, mod(a, b));
            break;

        default:
            printf("Invalid choice\n");
        }
    }
}
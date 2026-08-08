#include <stdio.h>

 main() {
    int num, sign;

    printf("Enter a number: ");
    scanf("%d", &num);

    sign = (num > 0) ? 1 : (num < 0) ? -1 : 0;

    switch (sign) {
        case 1:
            printf("The number is Positive.\n");
            break;

        case -1:
            printf("The number is Negative.\n");
            break;

        case 0:
            printf("The number is Zero.\n");
            break;

        default:
            printf("Invalid input.\n");
    }
}
#include <stdio.h>

 main()
{
    int language, choice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");

    printf("Enter your choice: ");
    scanf("%d", &language);

    switch (language)
    {
        case 1:
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("You have successfully done an Internet Recharge.");
                    break;

                case 2:
                    printf("You have successfully done a Top-up Recharge.");
                    break;

                case 3:
                    printf("You have successfully done a Special Recharge.");
                    break;

                default:
                    printf("Invalid Recharge Choice.");
            }
            break;

        case 2:
            printf("\nInternet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");

            printf("Apni Pasand Darj Kijiye: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Aapne safalta se Internet Recharge kar liya hai.");
                    break;

                case 2:
                    printf("Aapne safalta se Top-up Recharge kar liya hai.");
                    break;

                case 3:
                    printf("Aapne safalta se Special Recharge kar liya hai.");
                    break;

                default:
                    printf("Galat Vikalp.");
            }
            break;

        case 3:
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");

            printf("Tamari Pasand Aapo: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.");
                    break;

                case 2:
                    printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
                    break;

                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.");
                    break;

                default:
                    printf("Khoto Vikalp.");
            }
            break;

        default:
         printf("Invalid Language Choice.");
    }
}
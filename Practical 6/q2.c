#include <stdio.h>

 main()
{
    char str[100];
    int i, j, len = 0, count;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[len] != '\0')  // Find length of string
    {
        len++;
    }

    printf("\nFrequency of each letter:\n");

    for (i = 0; i < len; i++)  // Count frequency
    {
        count = 1;

       
        if (str[i] == '\0')   // Skip already counted characters
            continue;

        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '\0';   // Mark duplicate as counted
            }
        }

        printf("%c => %d\n", str[i], count);
    }

}
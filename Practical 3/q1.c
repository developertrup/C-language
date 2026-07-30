#include <stdio.h>

 main()
{
    char ch = 'a'; 

    do
    {
        printf("%c, ", ch); //a //e //y
        ch = ch+4;//97+4=101
    }
    while (ch <= 'z');//true
}
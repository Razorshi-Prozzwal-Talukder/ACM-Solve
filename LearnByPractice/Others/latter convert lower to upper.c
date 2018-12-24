#include<stdio.h>
#include<ctype.h>
main()
{
    int lower, upper;

    printf("Press any kind of latter: ");
    lower = getchar(); /*input any latter which is lower form*/
    upper = toupper(lower); /*it is processing*/
    printf("\nIts upper case is: ");
    putchar(upper); /*convert to the upper case. it works kind of printf*/

    return 0;

}


#include<stdio.h>
#include<ctype.h>
main()
{
    char character;

    printf("Press Any Key\n");

    character=getchar();

    if(isalpha(character)>0)                 ///here isalpha is use for to define alphabet
        printf("The Character is a LETTER.");
    else if(isdigit(character)>0)            ///here isdigit is use for to define Number
        printf("The Character is a DIGIT.");
    else
        printf("The Character is not alphanumeric.");


    return 0;
}

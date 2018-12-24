#include<stdio.h>
#include<ctype.h>

main()
{
    char letter[14];
    int i;
    for(i=0; i<14; i++)
        letter[i]=getchar();

    for(i=0; i<14; i++)
        putchar(toupper(letter[i]));
            return 0;
}


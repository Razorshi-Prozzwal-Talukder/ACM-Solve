#include<stdio.h>
#define EOLN '\n'

void reverse(void)
{
   char c;
   if((c = getchar()) != EOLN)
        reverse();
   putchar(c);
   return;
}
main()
{
    char c;
    printf("Enter a line: \n");
    c = getchar()

    printf("%c",reverse(c));
}

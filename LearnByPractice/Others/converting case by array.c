#include<stdio.h>
#include<ctype.h>
int main()
{
    char letter[6];
    int i;
    ///read the line
    for(i=0; i<6; i++)
    {
        letter[i]= getchar();
    }
    ///display the line in upper case
    for(i=0; i<6; i++)
    {
        putchar(toupper(letter[i]));
    }
}

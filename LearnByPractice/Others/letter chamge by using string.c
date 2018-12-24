#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char line[100], ch;
    gets(line);

    for(i=0; line[i]!='\0'; i++)
    {
       ch = line[i]+1;
       if(line[i]==32)
       {
           printf(" ",ch);
       }
       else
       {
            printf("%c",ch);
       }

    }
    return 0;



}


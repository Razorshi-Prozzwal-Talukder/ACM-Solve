#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char line[100];
    gets(line);
    for(i=1; line[i]!='\0'; i++)
    {
        j++;
    }
    for(j; j>=0; j--)
    {
        printf("%c",line[j]);
    }
    return 0;
}


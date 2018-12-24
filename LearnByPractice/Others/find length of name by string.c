#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i,count=0;
    gets(name);

    for(i=0; name[i]!='\0'; i++)
    {
       count++;
    }
    printf("Length is : %d", count);

    return 0;
}

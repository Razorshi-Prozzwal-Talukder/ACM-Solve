#include<stdio.h>
#include<string.h>
int main()
{
    int i,y=0;
    char name[80];
    gets(name);
    for(i=0; name[i]!='\0'; i++)
    {
        if(name[i]==32)
        {
            y++;
        }
    }
    printf("%d",y+1);


    return 0;

}


#include<stdio.h>
#include<string.h>
int main()
{
    int i, count=0;
    char line[100],ch;
    gets(line);
    for(i=0; line[i] != '\0'; i++)
    {
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
        {
            count++;
        }

    }
    printf("Total Voule is %d", count);
}

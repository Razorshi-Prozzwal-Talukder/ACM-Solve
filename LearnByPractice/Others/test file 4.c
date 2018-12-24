#include<stdio.h>
int main()
{
    char st[100];
    while(gets(st))
    {
        int l;
        l = strlen(st);
        printf("%d", l);
    }

    return 0;
}

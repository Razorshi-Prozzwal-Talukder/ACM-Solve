#include<stdio.h>
main()
{
    int k;
    int as[100];
    char ck='a';
    for(k=1; k<=26; k++)
    {
        as[k] = ck;
        ck=ck+1;
    }
    for(k=1; k<=26; k++)
        printf("%d ", as[k]);
}
